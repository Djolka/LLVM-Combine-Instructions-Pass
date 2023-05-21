file(REMOVE_RECURSE
  "../../../lib/libLLVMDiff.pdb"
  "../../../lib/libLLVMDiff.so"
  "../../../lib/libLLVMDiff.so.17git"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/LLVMDiff.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
