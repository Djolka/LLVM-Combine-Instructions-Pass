file(REMOVE_RECURSE
  "../../../../lib/libclangAST.pdb"
  "../../../../lib/libclangAST.so"
  "../../../../lib/libclangAST.so.17git"
  "AttrDocTable.inc"
  "Opcodes.inc"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangAST.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
