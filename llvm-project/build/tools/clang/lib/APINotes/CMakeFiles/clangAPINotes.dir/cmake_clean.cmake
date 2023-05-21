file(REMOVE_RECURSE
  "../../../../lib/libclangAPINotes.pdb"
  "../../../../lib/libclangAPINotes.so"
  "../../../../lib/libclangAPINotes.so.17git"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangAPINotes.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
