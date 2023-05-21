file(REMOVE_RECURSE
  "../../../lib/libLLVMCFIVerify.pdb"
  "../../../lib/libLLVMCFIVerify.so"
  "../../../lib/libLLVMCFIVerify.so.17git"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/LLVMCFIVerify.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
