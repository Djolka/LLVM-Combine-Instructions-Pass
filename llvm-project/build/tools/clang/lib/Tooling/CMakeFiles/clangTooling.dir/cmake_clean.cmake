file(REMOVE_RECURSE
  "../../../../lib/libclangTooling.pdb"
  "../../../../lib/libclangTooling.so"
  "../../../../lib/libclangTooling.so.17git"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangTooling.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
