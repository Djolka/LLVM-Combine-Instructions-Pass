file(REMOVE_RECURSE
  "../../../../../lib/libclangHandleCXX.pdb"
  "../../../../../lib/libclangHandleCXX.so"
  "../../../../../lib/libclangHandleCXX.so.17git"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangHandleCXX.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
