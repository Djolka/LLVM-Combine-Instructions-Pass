file(REMOVE_RECURSE
  "../../../../lib/libclangIndex.pdb"
  "../../../../lib/libclangIndex.so"
  "../../../../lib/libclangIndex.so.17git"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangIndex.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
