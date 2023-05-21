file(REMOVE_RECURSE
  "../../../lib/libLLVMDiff_static.a"
  "../../../lib/libLLVMDiff_static.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/LLVMDiff_static.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
