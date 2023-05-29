#include "llvm/Pass.h"
#include "llvm/IR/Function.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/ADT/Statistic.h"
#include "llvm/IR/Instructions.h"
#include "llvm/IR/Instruction.h"
#include "llvm/IR/InstrTypes.h"
#include "llvm/IR/Operator.h"
#include "llvm/IR/Constants.h"
#include "llvm/IR/IRBuilder.h"

using namespace llvm;

namespace {
    struct PrintInstructionsPass : public FunctionPass {
        std::vector<Instruction *> InstructionsToRemove;

        static char ID;
        PrintInstructionsPass() : FunctionPass(ID) {}


        //is it Binary operator
        bool IsBinaryOp(Instruction *Instr)
        {
            return isa<BinaryOperator>(Instr);
             // BinaryOperator *BinaryOp = dyn_cast<BinaryOperator>(Instr);
              //return BinaryOp != nullptr;
        }

        //is it compare instruction
        bool IsCmp(Instruction *Instr)
        {
            return isa<ICmpInst>(Instr);
        }

        /*

        //is it branch
        bool IsBranch(Instruction *Instr)
        {
            return isa<BranchInst>(Instr);
        }

        //is it constant int
        bool IsConstantInt(Value *Instr)
        {
            return isa<ConstantInt>(Instr);
        }

        //get value of that constant int
        int GetConstantInt(Value *Operand)
        {
            ConstantInt *Constant = dyn_cast<ConstantInt>(Operand);
            return Constant->getSExtValue();
        }
        */

        void HandleBinaryOp(Instruction *Instr)
        {

            BinaryOperator *BO = dyn_cast<BinaryOperator>(Instr);
            IRBuilder Builder(Instr);

            // 1.

            if (Constant *C = dyn_cast<Constant>(Instr->getOperand(0))) {
                outs() << "prvi konst" << "\n";
                switch (BO->getOpcode()) {
                    case Instruction::Add:
                        Instr->setOperand(0, Instr->getOperand(1));
                        Instr->setOperand(1, C);
                        break;
                    case Instruction::Mul:
                        Instr->setOperand(0, Instr->getOperand(1));
                        Instr->setOperand(1, C);
                        break;
                    default:
                        break;
                }

            }


            // 6.
            // Check if one of the operands is a constant and it is a power of two

            if(BO->getOpcode() == Instruction::Mul) {

                Value *operand1 = BO->getOperand(0);
                Value *operand2 = BO->getOperand(1);

                ConstantInt *constOp = dyn_cast<ConstantInt>(operand2);
                if (constOp && constOp->getValue().isPowerOf2()) {
                    // Get the log base 2 of the constant
                    unsigned int shiftAmount = constOp->getValue().logBase2();
                    Value *shiftInstr = Builder.CreateShl(operand1, shiftAmount);

                    // Replace the original multiplication instruction with the shift instruction
                    Instr->replaceAllUsesWith(shiftInstr);
                    InstructionsToRemove.push_back(Instr);
                }


            }


            return;
        }




        void HandleCmp(Instruction *I)
        {
            if (ICmpInst *CI = dyn_cast<ICmpInst>(I)) {
                Value *op0 = CI->getOperand(0);
                Value *op1 = CI->getOperand(1);
                CmpInst::Predicate pred = CI->getPredicate();
                CmpInst::Predicate newPred = CmpInst::BAD_ICMP_PREDICATE;

                IRBuilder Builder(I);

                switch (pred) {
                    case ICmpInst::ICMP_EQ:
                    case ICmpInst::ICMP_NE:
                        break;
                    case ICmpInst::ICMP_ULT:
                    case ICmpInst::ICMP_UGT:
                    case ICmpInst::ICMP_ULE:
                    case ICmpInst::ICMP_UGE:
                        newPred = pred == ICmpInst::ICMP_ULT || pred == ICmpInst::ICMP_UGT
                                ? CmpInst::ICMP_NE
                                : CmpInst::ICMP_EQ;

                        break;
                    case ICmpInst::ICMP_SLT:
                    case ICmpInst::ICMP_SGT:
                    case ICmpInst::ICMP_SLE:
                    case ICmpInst::ICMP_SGE:
                        newPred = pred == ICmpInst::ICMP_SLT || pred == ICmpInst::ICMP_SGT
                                ? CmpInst::ICMP_NE
                                : CmpInst::ICMP_EQ;
                        break;
                    default:
                        break;
                }

                Value *newCI = nullptr;
                if(newPred == CmpInst::ICMP_EQ) {
                    newCI = Builder.CreateICmpEQ(op0, op1);

                }
                else if(newPred == CmpInst::ICMP_NE){
                    newCI = Builder.CreateICmpNE(op0, op1);
                }
                else {
                    printf("...\n");
                }

                if(newCI) {
                    CI->replaceAllUsesWith(newCI);
                    InstructionsToRemove.push_back(CI);
                }

            }


        }


        /*
        void HandleBranch(Instruction *Instr)
        {
            outs() << "branch" << "\n";
            BranchInst *Branch = dyn_cast<BranchInst>(Instr);

            if (Branch->isConditional()) {
                if (IsConstantInt(Branch->getCondition())) {
                    ConstantInt *ConditionValue = dyn_cast<ConstantInt>(Branch->getCondition());
                    if (ConditionValue->getZExtValue() == 1) {
                        BranchInst::Create(Branch->getSuccessor(0), Instr->getParent());
                    }
                    else {
                        BranchInst::Create(Branch->getSuccessor(1), Instr->getParent());
                    }

                    InstructionsToRemove.push_back(Instr);
                }
            }
        }
        */

        void IterateThroughFunction(Function &F)
        {
            for (BasicBlock &BB : F) {
                for (Instruction &Instr : BB) {
                    if(IsBinaryOp(&Instr)) {
                        HandleBinaryOp(&Instr);
                    }

                    if (IsCmp(&Instr)) {
                        HandleCmp(&Instr);
                    }
                    /*
                    else if (IsBranch(&Instr)) {
                        HandleBranch(&Instr);
                    }
                    */
                }
            }

            for (Instruction *Instr : InstructionsToRemove) {
                Instr->eraseFromParent();
            }
        }

        bool runOnFunction(Function &F) override {
            
            IterateThroughFunction(F);

            return true;
        }
    }; // end of struct Hello
}  // end of anonymous namespace

char PrintInstructionsPass::ID = 0;
static RegisterPass<PrintInstructionsPass> X
("ourpipass", "This is our simple function pass",
                             false /* Only looks at CFG */,
                             false /* Analysis Pass */);
