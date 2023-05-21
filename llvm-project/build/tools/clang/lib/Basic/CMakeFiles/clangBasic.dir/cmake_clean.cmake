file(REMOVE_RECURSE
  "../../../../lib/libclangBasic.pdb"
  "../../../../lib/libclangBasic.so"
  "../../../../lib/libclangBasic.so.17git"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangBasic.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
