file(REMOVE_RECURSE
  "../../../lib/libLLVMExegesis.pdb"
  "../../../lib/libLLVMExegesis.so"
  "../../../lib/libLLVMExegesis.so.17git"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/LLVMExegesis.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
