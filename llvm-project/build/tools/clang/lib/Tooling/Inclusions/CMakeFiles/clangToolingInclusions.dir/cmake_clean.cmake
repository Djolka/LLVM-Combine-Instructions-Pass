file(REMOVE_RECURSE
  "../../../../../lib/libclangToolingInclusions.pdb"
  "../../../../../lib/libclangToolingInclusions.so"
  "../../../../../lib/libclangToolingInclusions.so.17git"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangToolingInclusions.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
