file(REMOVE_RECURSE
  "../../../../lib/libclangFrontend.pdb"
  "../../../../lib/libclangFrontend.so"
  "../../../../lib/libclangFrontend.so.17git"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangFrontend.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()