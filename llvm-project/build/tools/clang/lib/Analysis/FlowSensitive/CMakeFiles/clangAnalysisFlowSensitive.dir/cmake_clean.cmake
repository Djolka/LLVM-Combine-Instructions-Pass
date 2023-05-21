file(REMOVE_RECURSE
  "../../../../../lib/libclangAnalysisFlowSensitive.pdb"
  "../../../../../lib/libclangAnalysisFlowSensitive.so"
  "../../../../../lib/libclangAnalysisFlowSensitive.so.17git"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangAnalysisFlowSensitive.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
