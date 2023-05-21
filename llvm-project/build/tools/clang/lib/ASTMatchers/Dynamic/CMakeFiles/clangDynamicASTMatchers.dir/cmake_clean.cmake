file(REMOVE_RECURSE
  "../../../../../lib/libclangDynamicASTMatchers.pdb"
  "../../../../../lib/libclangDynamicASTMatchers.so"
  "../../../../../lib/libclangDynamicASTMatchers.so.17git"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangDynamicASTMatchers.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
