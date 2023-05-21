#include "llvm/Pass.h"
#include "llvm/IR/Function.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/ADT/Statistic.h"
#include "llvm/IR/Instructions.h"

using namespace llvm;

namespace {
    struct PrintInstructionsPass : public FunctionPass {
        static char ID;
        PrintInstructionsPass() : FunctionPass(ID) {}

        bool runOnFunction(Function &F) override {
        
            for (BasicBlock &BB : F) {
                for (Instruction &I : BB) {
                    if (StoreInst *store = dyn_cast<StoreInst>(&I)) {
                        Value *ptr = store->getPointerOperand();
                        Value *value = store->getValueOperand();
                        outs() << "Assignment: " << *ptr << " = " << *value << "\n";
                    }
      		}
            }
        
            return false;
	}
    }; // end of struct Hello
}  // end of anonymous namespace

char PrintInstructionsPass::ID = 0;
static RegisterPass<PrintInstructionsPass> X
("ourpipass", "This is our simple function pass",
                             false /* Only looks at CFG */,
                             false /* Analysis Pass */);
