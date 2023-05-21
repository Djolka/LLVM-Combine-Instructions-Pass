file(REMOVE_RECURSE
  "../../../../../lib/libclangStaticAnalyzerCore.pdb"
  "../../../../../lib/libclangStaticAnalyzerCore.so"
  "../../../../../lib/libclangStaticAnalyzerCore.so.17git"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangStaticAnalyzerCore.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
