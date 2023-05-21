file(REMOVE_RECURSE
  "../../../../lib/libclangLex.pdb"
  "../../../../lib/libclangLex.so"
  "../../../../lib/libclangLex.so.17git"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangLex.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
