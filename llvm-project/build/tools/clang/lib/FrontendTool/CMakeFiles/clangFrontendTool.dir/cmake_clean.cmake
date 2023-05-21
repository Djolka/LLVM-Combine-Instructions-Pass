file(REMOVE_RECURSE
  "../../../../lib/libclangFrontendTool.pdb"
  "../../../../lib/libclangFrontendTool.so"
  "../../../../lib/libclangFrontendTool.so.17git"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangFrontendTool.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
