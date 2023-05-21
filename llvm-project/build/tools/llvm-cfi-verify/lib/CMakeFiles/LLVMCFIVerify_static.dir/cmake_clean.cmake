file(REMOVE_RECURSE
  "../../../lib/libLLVMCFIVerify_static.a"
  "../../../lib/libLLVMCFIVerify_static.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/LLVMCFIVerify_static.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
