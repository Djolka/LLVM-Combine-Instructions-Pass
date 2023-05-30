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

#include <unordered_map>

using namespace llvm;

namespace {
    struct CombineInstructionsPass : public FunctionPass {
        std::vector<Instruction *> InstructionsToRemove;
        std::unordered_map<Value *, Value *> VariablesMap;

        static char ID;
        CombineInstructionsPass() : FunctionPass(ID) {}

        bool IsBinaryOp(Instruction *Instr)
        {
            return isa<BinaryOperator>(Instr);
        }

        bool IsCmp(Instruction *Instr)
        {
            return isa<ICmpInst>(Instr);
        }


        void HandleBinaryOp(Instruction *Instr)
        {

            BinaryOperator *BO = dyn_cast<BinaryOperator>(Instr);
            IRBuilder Builder(Instr);

            // 1.

            if (Constant *C = dyn_cast<Constant>(Instr->getOperand(0))) {
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

            // 5.

            if(BO->getOpcode() == Instruction::Add) {
                if(VariablesMap[BO->getOperand(0)] == VariablesMap[BO->getOperand(1)]) {
                    Value *shiftInstr = Builder.CreateShl(BO->getOperand(0), 1);
                    Instr->replaceAllUsesWith(shiftInstr);
                    InstructionsToRemove.push_back(Instr);
                }

            }


            // 6.

            if(BO->getOpcode() == Instruction::Mul) {

                Value *operand1 = BO->getOperand(0);
                Value *operand2 = BO->getOperand(1);

                ConstantInt *constOp = dyn_cast<ConstantInt>(operand2);
                if (constOp && constOp->getValue().isPowerOf2()) {
                    unsigned int shiftAmount = constOp->getValue().logBase2();
                    Value *shiftInstr = Builder.CreateShl(operand1, shiftAmount);
                    Instr->replaceAllUsesWith(shiftInstr);
                    InstructionsToRemove.push_back(Instr);
                }


            }

            return;
        }


        void HandleCmp(Instruction *Instr) // 1.
        {
            if (ICmpInst *CI = dyn_cast<ICmpInst>(Instr)) {
                Value *op0 = CI->getOperand(0);
                Value *op1 = CI->getOperand(1);
                CmpInst::Predicate pred = CI->getPredicate();

                IRBuilder Builder(Instr);
                Value *newCI = nullptr;

                if (Constant *C = dyn_cast<Constant>(op0)) {

                    switch (pred) {
                        case ICmpInst::ICMP_EQ:
                            Instr->setOperand(0, op1);
                            Instr->setOperand(1, op0);
                            break;
                        case ICmpInst::ICMP_NE:
                            Instr->setOperand(0, op1);
                            Instr->setOperand(1, op0);
                            break;
                        case ICmpInst::ICMP_SLT:
                            newCI = Builder.CreateICmpSGT(op1, op0);
                            break;
                        case ICmpInst::ICMP_SGT:
                            newCI = Builder.CreateICmpSLT(op1, op0);
                            break;
                        case ICmpInst::ICMP_SLE:
                            newCI = Builder.CreateICmpSGE(op1, op0);
                            break;
                        case ICmpInst::ICMP_SGE:
                            newCI = Builder.CreateICmpSLE(op1, op0);
                            break;
                        default:
                            break;
                    }

                    if(newCI) {
                        CI->replaceAllUsesWith(newCI);
                        InstructionsToRemove.push_back(CI);
                    }

                }

            }

        }

        void IterateThroughFunction(Function &F)
        {

            for (BasicBlock &BB : F) {
                for (Instruction &Instr : BB) {
                    if (LoadInst *Store = dyn_cast<LoadInst>(&Instr)) {
                        VariablesMap[Store] = Store->getOperand(0);
                    }

                    if(IsBinaryOp(&Instr)) {
                        HandleBinaryOp(&Instr);
                    }

                    if (IsCmp(&Instr)) {
                        HandleCmp(&Instr);
                    }
                }
            }
        }

        void RemoveInstructions() {
            for (Instruction *Instr : InstructionsToRemove) {
                Instr->eraseFromParent();
            }
        }


        bool runOnFunction(Function &F) override {
            
            IterateThroughFunction(F);
            RemoveInstructions();

            return true;
        }
    };
}

char CombineInstructionsPass::ID = 0;
static RegisterPass<CombineInstructionsPass> X
("ourcipass", "This is our combine instructions pass",
                             false /* Only looks at CFG */,
                             false /* Analysis Pass */);
