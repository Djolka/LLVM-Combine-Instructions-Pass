add_llvm_library( LLVMPrintInstructionsPass MODULE
  PrintInstructionsPass.cpp

  PLUGIN_TOOL
  opt
  )
