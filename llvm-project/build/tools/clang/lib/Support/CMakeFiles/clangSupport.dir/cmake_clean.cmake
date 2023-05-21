file(REMOVE_RECURSE
  "../../../../lib/libclangSupport.pdb"
  "../../../../lib/libclangSupport.so"
  "../../../../lib/libclangSupport.so.17git"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangSupport.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
