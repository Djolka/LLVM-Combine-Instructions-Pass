file(REMOVE_RECURSE
  "../../../../lib/libclangSerialization.pdb"
  "../../../../lib/libclangSerialization.so"
  "../../../../lib/libclangSerialization.so.17git"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangSerialization.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
