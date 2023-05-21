file(REMOVE_RECURSE
  "../../../../lib/libclangParse.pdb"
  "../../../../lib/libclangParse.so"
  "../../../../lib/libclangParse.so.17git"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangParse.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
