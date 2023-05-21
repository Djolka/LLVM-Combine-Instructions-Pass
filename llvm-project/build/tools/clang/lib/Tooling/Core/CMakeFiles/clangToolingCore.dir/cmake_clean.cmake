file(REMOVE_RECURSE
  "../../../../../lib/libclangToolingCore.pdb"
  "../../../../../lib/libclangToolingCore.so"
  "../../../../../lib/libclangToolingCore.so.17git"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangToolingCore.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
