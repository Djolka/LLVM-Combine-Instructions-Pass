file(REMOVE_RECURSE
  "../../../../lib/libclangSema.pdb"
  "../../../../lib/libclangSema.so"
  "../../../../lib/libclangSema.so.17git"
  "OpenCLBuiltins.inc"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangSema.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
