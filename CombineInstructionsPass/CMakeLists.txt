add_llvm_library( LLVMCombineInstructionsPass MODULE
  CombineInstructionsPass.cpp

  PLUGIN_TOOL
  opt
  )
