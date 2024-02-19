file(REMOVE_RECURSE
  "../lib/libStruct.pdb"
  "../lib/libStruct.so"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/Struct.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
