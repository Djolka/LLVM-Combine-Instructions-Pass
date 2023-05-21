file(REMOVE_RECURSE
  "../../../../../lib/libclangToolingSyntax.pdb"
  "../../../../../lib/libclangToolingSyntax.so"
  "../../../../../lib/libclangToolingSyntax.so.17git"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangToolingSyntax.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
