# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/user/Desktop/KK-projekat/llvm-project/llvm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/Desktop/KK-projekat/llvm-project/build

# Include any dependencies generated for this target.
include lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/depend.make

# Include the progress variables for this target.
include lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/progress.make

# Include the compile flags for this target's objects.
include lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/flags.make

lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/BuildIDFetcher.cpp.o: lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/flags.make
lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/BuildIDFetcher.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Debuginfod/BuildIDFetcher.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/BuildIDFetcher.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Debuginfod && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMDebuginfod.dir/BuildIDFetcher.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Debuginfod/BuildIDFetcher.cpp

lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/BuildIDFetcher.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMDebuginfod.dir/BuildIDFetcher.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Debuginfod && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Debuginfod/BuildIDFetcher.cpp > CMakeFiles/LLVMDebuginfod.dir/BuildIDFetcher.cpp.i

lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/BuildIDFetcher.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMDebuginfod.dir/BuildIDFetcher.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Debuginfod && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Debuginfod/BuildIDFetcher.cpp -o CMakeFiles/LLVMDebuginfod.dir/BuildIDFetcher.cpp.s

lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/Debuginfod.cpp.o: lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/flags.make
lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/Debuginfod.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Debuginfod/Debuginfod.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/Debuginfod.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Debuginfod && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMDebuginfod.dir/Debuginfod.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Debuginfod/Debuginfod.cpp

lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/Debuginfod.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMDebuginfod.dir/Debuginfod.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Debuginfod && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Debuginfod/Debuginfod.cpp > CMakeFiles/LLVMDebuginfod.dir/Debuginfod.cpp.i

lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/Debuginfod.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMDebuginfod.dir/Debuginfod.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Debuginfod && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Debuginfod/Debuginfod.cpp -o CMakeFiles/LLVMDebuginfod.dir/Debuginfod.cpp.s

lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/HTTPClient.cpp.o: lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/flags.make
lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/HTTPClient.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Debuginfod/HTTPClient.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/HTTPClient.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Debuginfod && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMDebuginfod.dir/HTTPClient.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Debuginfod/HTTPClient.cpp

lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/HTTPClient.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMDebuginfod.dir/HTTPClient.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Debuginfod && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Debuginfod/HTTPClient.cpp > CMakeFiles/LLVMDebuginfod.dir/HTTPClient.cpp.i

lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/HTTPClient.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMDebuginfod.dir/HTTPClient.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Debuginfod && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Debuginfod/HTTPClient.cpp -o CMakeFiles/LLVMDebuginfod.dir/HTTPClient.cpp.s

lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/HTTPServer.cpp.o: lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/flags.make
lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/HTTPServer.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Debuginfod/HTTPServer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/HTTPServer.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Debuginfod && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMDebuginfod.dir/HTTPServer.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Debuginfod/HTTPServer.cpp

lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/HTTPServer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMDebuginfod.dir/HTTPServer.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Debuginfod && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Debuginfod/HTTPServer.cpp > CMakeFiles/LLVMDebuginfod.dir/HTTPServer.cpp.i

lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/HTTPServer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMDebuginfod.dir/HTTPServer.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Debuginfod && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Debuginfod/HTTPServer.cpp -o CMakeFiles/LLVMDebuginfod.dir/HTTPServer.cpp.s

# Object files for target LLVMDebuginfod
LLVMDebuginfod_OBJECTS = \
"CMakeFiles/LLVMDebuginfod.dir/BuildIDFetcher.cpp.o" \
"CMakeFiles/LLVMDebuginfod.dir/Debuginfod.cpp.o" \
"CMakeFiles/LLVMDebuginfod.dir/HTTPClient.cpp.o" \
"CMakeFiles/LLVMDebuginfod.dir/HTTPServer.cpp.o"

# External object files for target LLVMDebuginfod
LLVMDebuginfod_EXTERNAL_OBJECTS =

lib/libLLVMDebuginfod.so.17git: lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/BuildIDFetcher.cpp.o
lib/libLLVMDebuginfod.so.17git: lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/Debuginfod.cpp.o
lib/libLLVMDebuginfod.so.17git: lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/HTTPClient.cpp.o
lib/libLLVMDebuginfod.so.17git: lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/HTTPServer.cpp.o
lib/libLLVMDebuginfod.so.17git: lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/build.make
lib/libLLVMDebuginfod.so.17git: lib/libLLVMSymbolize.so.17git
lib/libLLVMDebuginfod.so.17git: lib/libLLVMDebugInfoDWARF.so.17git
lib/libLLVMDebuginfod.so.17git: lib/libLLVMObject.so.17git
lib/libLLVMDebuginfod.so.17git: lib/libLLVMBinaryFormat.so.17git
lib/libLLVMDebuginfod.so.17git: lib/libLLVMSupport.so.17git
lib/libLLVMDebuginfod.so.17git: lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX shared library ../libLLVMDebuginfod.so"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Debuginfod && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMDebuginfod.dir/link.txt --verbose=$(VERBOSE)
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Debuginfod && $(CMAKE_COMMAND) -E cmake_symlink_library ../libLLVMDebuginfod.so.17git ../libLLVMDebuginfod.so.17git ../libLLVMDebuginfod.so

lib/libLLVMDebuginfod.so: lib/libLLVMDebuginfod.so.17git
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libLLVMDebuginfod.so

# Rule to build all files generated by this target.
lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/build: lib/libLLVMDebuginfod.so

.PHONY : lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/build

lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/clean:
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Debuginfod && $(CMAKE_COMMAND) -P CMakeFiles/LLVMDebuginfod.dir/cmake_clean.cmake
.PHONY : lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/clean

lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/depend:
	cd /home/user/Desktop/KK-projekat/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Desktop/KK-projekat/llvm-project/llvm /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Debuginfod /home/user/Desktop/KK-projekat/llvm-project/build /home/user/Desktop/KK-projekat/llvm-project/build/lib/Debuginfod /home/user/Desktop/KK-projekat/llvm-project/build/lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Debuginfod/CMakeFiles/LLVMDebuginfod.dir/depend
