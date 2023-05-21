file(REMOVE_RECURSE
  "../../../../lib/libclangDriver.pdb"
  "../../../../lib/libclangDriver.so"
  "../../../../lib/libclangDriver.so.17git"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangDriver.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
