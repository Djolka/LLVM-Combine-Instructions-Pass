#include "llvm/Pass.h"
#include "llvm/IR/Function.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/ADT/Statistic.h"
#include "llvm/IR/Instructions.h"
#include "llvm/IR/Instruction.h"
#include "llvm/IR/InstrTypes.h"
#include "llvm/IR/Operator.h"
#include "llvm/IR/Constants.h"

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
        //    BinaryOperator *BinaryOp = dyn_cast<BinaryOperator>(Instr);
        //    return BinaryOp != nullptr;
        }

        //is it compare instruction
        bool IsCmp(Instruction *Instr)
        {
            return isa<ICmpInst>(Instr);
        }

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

        //handling binary operators
        void HandleBinaryOp(Instruction *Instr)
        {
            outs() << "binary op" << "\n";
            outs() << *Instr << "\n";
            //if it is constant both left and right, then apply given operation on them
            if (IsConstantInt(Instr->getOperand(0)) && IsConstantInt(Instr->getOperand(1))) {
                outs() << "2 const values" << "\n";
                int ValueLeft = GetConstantInt(Instr->getOperand(0)),
                    ValueRight = GetConstantInt(Instr->getOperand(1));
                Value *Constant = nullptr;

                if (isa<AddOperator>(Instr)) {
                    Constant = ConstantInt::get(Type::getInt32Ty(Instr->getContext()), ValueLeft + ValueRight);
                }
                else if (isa<SubOperator>(Instr)) {
                    Constant = ConstantInt::get(Type::getInt32Ty(Instr->getContext()), ValueLeft - ValueRight);
                }
                else if (isa<MulOperator>(Instr)) {
                    Constant = ConstantInt::get(Type::getInt32Ty(Instr->getContext()), ValueLeft * ValueRight);
                }
                else if (isa<SDivOperator>(Instr)) {
                    Constant = ConstantInt::get(Type::getInt32Ty(Instr->getContext()), ValueLeft / ValueRight);
                }

                if (Constant != nullptr) {
                    Instr->replaceAllUsesWith(Constant);
                }
            }else if (Constant *C = dyn_cast<Constant>(Instr->getOperand(0))) {
                // outs() << "stigao u case1" << "\n";
                // outs() << *(Instr->getOperand(0)) << "\n";
                //case 1 - move constant operands of binary operation on RHS
                Instr->setOperand(0, Instr->getOperand(1));
                Instr->setOperand(1, C);
            }
        }


        void HandleCmp(Instruction *Instr)
        {
            outs() << "compare" << "\n";
            if (IsConstantInt(Instr->getOperand(0)) && IsConstantInt(Instr->getOperand(1))) {
                ICmpInst *Cmp = dyn_cast<ICmpInst>(Instr);

                int ValueLeft = GetConstantInt(Instr->getOperand(0)),
                    ValueRight = GetConstantInt(Instr->getOperand(1));

                ConstantInt *BooleanValue = nullptr;
                auto Pred = Cmp->getPredicate();

                if (Pred == ICmpInst::ICMP_EQ) {
                    BooleanValue = ConstantInt::get(Type::getInt1Ty(Instr->getContext()), ValueLeft == ValueRight);
                }
                else if (Pred == ICmpInst::ICMP_NE) {
                    BooleanValue = ConstantInt::get(Type::getInt1Ty(Instr->getContext()), ValueLeft != ValueRight);
                }
                else if (Pred == ICmpInst::ICMP_SGT) {
                    BooleanValue = ConstantInt::get(Type::getInt1Ty(Instr->getContext()), ValueLeft > ValueRight);
                }
                else if (Pred == ICmpInst::ICMP_SLT) {
                    BooleanValue = ConstantInt::get(Type::getInt1Ty(Instr->getContext()), ValueLeft < ValueRight);
                }
                else if (Pred == ICmpInst::ICMP_SGE) {
                    BooleanValue = ConstantInt::get(Type::getInt1Ty(Instr->getContext()), ValueLeft >= ValueRight);
                }
                else if (Pred == ICmpInst::ICMP_SLE) {
                    BooleanValue = ConstantInt::get(Type::getInt1Ty(Instr->getContext()), ValueLeft <= ValueRight);
                }

                if (BooleanValue != nullptr) {
                    Instr->replaceAllUsesWith(BooleanValue);
                }
            }
        }


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


        void IterateThroughFunction(Function &F)
        {
            for (BasicBlock &BB : F) {
                for (Instruction &Instr : BB) {
                    // if (StoreInst *store = dyn_cast<StoreInst>(&Instr)) {
                    //     Value *ptr = store->getPointerOperand();
                    //     Value *value = store->getValueOperand();
                    //     outs() << "Assignment: " << *ptr << " = " << *value << "\n";
                    // }
                    if (IsBinaryOp(&Instr)) {
                        HandleBinaryOp(&Instr);
                    }
                    else if (IsCmp(&Instr)) {
                        HandleCmp(&Instr);
                    }
                    else if (IsBranch(&Instr)) {
                        HandleBranch(&Instr);
                    }
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