file(REMOVE_RECURSE
  "../../../../lib/libclangAnalysis.pdb"
  "../../../../lib/libclangAnalysis.so"
  "../../../../lib/libclangAnalysis.so.17git"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangAnalysis.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
