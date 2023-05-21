file(REMOVE_RECURSE
  "../../../../lib/libclangExtractAPI.pdb"
  "../../../../lib/libclangExtractAPI.so"
  "../../../../lib/libclangExtractAPI.so.17git"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangExtractAPI.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
