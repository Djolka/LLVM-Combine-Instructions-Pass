file(REMOVE_RECURSE
  "../../../../lib/libclangARCMigrate.pdb"
  "../../../../lib/libclangARCMigrate.so"
  "../../../../lib/libclangARCMigrate.so.17git"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangARCMigrate.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
