file(REMOVE_RECURSE
  "../../../../../lib/libclangTransformer.pdb"
  "../../../../../lib/libclangTransformer.so"
  "../../../../../lib/libclangTransformer.so.17git"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangTransformer.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
