file(REMOVE_RECURSE
  "../../../../lib/libclangCodeGen.pdb"
  "../../../../lib/libclangCodeGen.so"
  "../../../../lib/libclangCodeGen.so.17git"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangCodeGen.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
