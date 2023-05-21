file(REMOVE_RECURSE
  "../../../../../lib/libclangRewriteFrontend.pdb"
  "../../../../../lib/libclangRewriteFrontend.so"
  "../../../../../lib/libclangRewriteFrontend.so.17git"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangRewriteFrontend.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
