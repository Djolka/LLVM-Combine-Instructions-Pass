file(REMOVE_RECURSE
  "../../../../lib/libclangEdit.pdb"
  "../../../../lib/libclangEdit.so"
  "../../../../lib/libclangEdit.so.17git"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangEdit.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
