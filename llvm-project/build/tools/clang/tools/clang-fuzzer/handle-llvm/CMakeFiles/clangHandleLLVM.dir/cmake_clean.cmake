file(REMOVE_RECURSE
  "../../../../../lib/libclangHandleLLVM.pdb"
  "../../../../../lib/libclangHandleLLVM.so"
  "../../../../../lib/libclangHandleLLVM.so.17git"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangHandleLLVM.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
