# Install script for directory: /home/user/Desktop/KK-projekat/llvm-project/clang/lib/Tooling

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclangToolingx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/user/Desktop/KK-projekat/llvm-project/build/lib/libclangTooling.so.17git")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libclangTooling.so.17git" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libclangTooling.so.17git")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libclangTooling.so.17git")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclangToolingx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/user/Desktop/KK-projekat/llvm-project/build/lib/libclangTooling.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libclangTooling.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libclangTooling.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libclangTooling.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Tooling/Core/cmake_install.cmake")
  include("/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Tooling/Inclusions/cmake_install.cmake")
  include("/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Tooling/Refactoring/cmake_install.cmake")
  include("/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Tooling/ASTDiff/cmake_install.cmake")
  include("/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Tooling/DumpTool/cmake_install.cmake")
  include("/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Tooling/Syntax/cmake_install.cmake")
  include("/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Tooling/DependencyScanning/cmake_install.cmake")
  include("/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Tooling/Transformer/cmake_install.cmake")

endif()

