file(REMOVE_RECURSE
  "../../../../lib/libclangRewrite.pdb"
  "../../../../lib/libclangRewrite.so"
  "../../../../lib/libclangRewrite.so.17git"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangRewrite.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
