file(REMOVE_RECURSE
  "../../../lib/libLLVMExegesis_static.a"
  "../../../lib/libLLVMExegesis_static.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/LLVMExegesis_static.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
