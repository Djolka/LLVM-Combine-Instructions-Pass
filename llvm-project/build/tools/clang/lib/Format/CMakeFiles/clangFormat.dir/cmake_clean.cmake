file(REMOVE_RECURSE
  "../../../../lib/libclangFormat.pdb"
  "../../../../lib/libclangFormat.so"
  "../../../../lib/libclangFormat.so.17git"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangFormat.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
