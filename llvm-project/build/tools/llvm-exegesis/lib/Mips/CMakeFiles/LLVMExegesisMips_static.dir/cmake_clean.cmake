file(REMOVE_RECURSE
  "../../../../lib/libLLVMExegesisMips_static.a"
  "../../../../lib/libLLVMExegesisMips_static.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/LLVMExegesisMips_static.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
