# Install script for directory: /home/user/Desktop/KK-projekat/llvm-project/llvm

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/user/Desktop/llvm-project-build")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xllvm-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES
    "/home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm"
    "/home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm-c"
    FILES_MATCHING REGEX "/[^/]*\\.def$" REGEX "/[^/]*\\.h$" REGEX "/[^/]*\\.td$" REGEX "/[^/]*\\.inc$" REGEX "/LICENSE\\.TXT$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xllvm-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES
    "/home/user/Desktop/KK-projekat/llvm-project/build/include/llvm"
    "/home/user/Desktop/KK-projekat/llvm-project/build/include/llvm-c"
    FILES_MATCHING REGEX "/[^/]*\\.def$" REGEX "/[^/]*\\.h$" REGEX "/[^/]*\\.gen$" REGEX "/[^/]*\\.inc$" REGEX "/CMakeFiles$" EXCLUDE REGEX "/config\\.h$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcmake-exportsx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/llvm" TYPE FILE FILES "/home/user/Desktop/KK-projekat/llvm-project/build/./lib/cmake/llvm/LLVMConfigExtensions.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/user/Desktop/KK-projekat/llvm-project/build/lib/Demangle/cmake_install.cmake")
  include("/home/user/Desktop/KK-projekat/llvm-project/build/lib/Support/cmake_install.cmake")
  include("/home/user/Desktop/KK-projekat/llvm-project/build/lib/TableGen/cmake_install.cmake")
  include("/home/user/Desktop/KK-projekat/llvm-project/build/utils/TableGen/cmake_install.cmake")
  include("/home/user/Desktop/KK-projekat/llvm-project/build/include/llvm/cmake_install.cmake")
  include("/home/user/Desktop/KK-projekat/llvm-project/build/lib/cmake_install.cmake")
  include("/home/user/Desktop/KK-projekat/llvm-project/build/utils/FileCheck/cmake_install.cmake")
  include("/home/user/Desktop/KK-projekat/llvm-project/build/utils/PerfectShuffle/cmake_install.cmake")
  include("/home/user/Desktop/KK-projekat/llvm-project/build/utils/count/cmake_install.cmake")
  include("/home/user/Desktop/KK-projekat/llvm-project/build/utils/not/cmake_install.cmake")
  include("/home/user/Desktop/KK-projekat/llvm-project/build/utils/UnicodeData/cmake_install.cmake")
  include("/home/user/Desktop/KK-projekat/llvm-project/build/utils/yaml-bench/cmake_install.cmake")
  include("/home/user/Desktop/KK-projekat/llvm-project/build/utils/split-file/cmake_install.cmake")
  include("/home/user/Desktop/KK-projekat/llvm-project/build/third-party/unittest/cmake_install.cmake")
  include("/home/user/Desktop/KK-projekat/llvm-project/build/projects/cmake_install.cmake")
  include("/home/user/Desktop/KK-projekat/llvm-project/build/tools/cmake_install.cmake")
  include("/home/user/Desktop/KK-projekat/llvm-project/build/runtimes/cmake_install.cmake")
  include("/home/user/Desktop/KK-projekat/llvm-project/build/examples/cmake_install.cmake")
  include("/home/user/Desktop/KK-projekat/llvm-project/build/utils/lit/cmake_install.cmake")
  include("/home/user/Desktop/KK-projekat/llvm-project/build/test/cmake_install.cmake")
  include("/home/user/Desktop/KK-projekat/llvm-project/build/unittests/cmake_install.cmake")
  include("/home/user/Desktop/KK-projekat/llvm-project/build/docs/cmake_install.cmake")
  include("/home/user/Desktop/KK-projekat/llvm-project/build/cmake/modules/cmake_install.cmake")
  include("/home/user/Desktop/KK-projekat/llvm-project/build/utils/llvm-lit/cmake_install.cmake")
  include("/home/user/Desktop/KK-projekat/llvm-project/build/third-party/benchmark/cmake_install.cmake")
  include("/home/user/Desktop/KK-projekat/llvm-project/build/benchmarks/cmake_install.cmake")
  include("/home/user/Desktop/KK-projekat/llvm-project/build/utils/llvm-locstats/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/user/Desktop/KK-projekat/llvm-project/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
