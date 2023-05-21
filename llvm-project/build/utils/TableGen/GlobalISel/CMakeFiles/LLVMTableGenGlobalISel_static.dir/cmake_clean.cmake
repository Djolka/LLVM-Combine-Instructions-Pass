file(REMOVE_RECURSE
  "../../../lib/libLLVMTableGenGlobalISel_static.a"
  "../../../lib/libLLVMTableGenGlobalISel_static.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/LLVMTableGenGlobalISel_static.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
