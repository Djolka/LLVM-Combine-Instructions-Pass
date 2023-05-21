file(REMOVE_RECURSE
  "../../../../lib/libclangInterpreter.pdb"
  "../../../../lib/libclangInterpreter.so"
  "../../../../lib/libclangInterpreter.so.17git"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangInterpreter.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
