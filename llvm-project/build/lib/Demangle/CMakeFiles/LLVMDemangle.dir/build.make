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
include lib/Demangle/CMakeFiles/LLVMDemangle.dir/depend.make

# Include the progress variables for this target.
include lib/Demangle/CMakeFiles/LLVMDemangle.dir/progress.make

# Include the compile flags for this target's objects.
include lib/Demangle/CMakeFiles/LLVMDemangle.dir/flags.make

lib/Demangle/CMakeFiles/LLVMDemangle.dir/Demangle.cpp.o: lib/Demangle/CMakeFiles/LLVMDemangle.dir/flags.make
lib/Demangle/CMakeFiles/LLVMDemangle.dir/Demangle.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Demangle/Demangle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/Demangle/CMakeFiles/LLVMDemangle.dir/Demangle.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Demangle && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMDemangle.dir/Demangle.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Demangle/Demangle.cpp

lib/Demangle/CMakeFiles/LLVMDemangle.dir/Demangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMDemangle.dir/Demangle.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Demangle && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Demangle/Demangle.cpp > CMakeFiles/LLVMDemangle.dir/Demangle.cpp.i

lib/Demangle/CMakeFiles/LLVMDemangle.dir/Demangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMDemangle.dir/Demangle.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Demangle && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Demangle/Demangle.cpp -o CMakeFiles/LLVMDemangle.dir/Demangle.cpp.s

lib/Demangle/CMakeFiles/LLVMDemangle.dir/ItaniumDemangle.cpp.o: lib/Demangle/CMakeFiles/LLVMDemangle.dir/flags.make
lib/Demangle/CMakeFiles/LLVMDemangle.dir/ItaniumDemangle.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Demangle/ItaniumDemangle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object lib/Demangle/CMakeFiles/LLVMDemangle.dir/ItaniumDemangle.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Demangle && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMDemangle.dir/ItaniumDemangle.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Demangle/ItaniumDemangle.cpp

lib/Demangle/CMakeFiles/LLVMDemangle.dir/ItaniumDemangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMDemangle.dir/ItaniumDemangle.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Demangle && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Demangle/ItaniumDemangle.cpp > CMakeFiles/LLVMDemangle.dir/ItaniumDemangle.cpp.i

lib/Demangle/CMakeFiles/LLVMDemangle.dir/ItaniumDemangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMDemangle.dir/ItaniumDemangle.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Demangle && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Demangle/ItaniumDemangle.cpp -o CMakeFiles/LLVMDemangle.dir/ItaniumDemangle.cpp.s

lib/Demangle/CMakeFiles/LLVMDemangle.dir/MicrosoftDemangle.cpp.o: lib/Demangle/CMakeFiles/LLVMDemangle.dir/flags.make
lib/Demangle/CMakeFiles/LLVMDemangle.dir/MicrosoftDemangle.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Demangle/MicrosoftDemangle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object lib/Demangle/CMakeFiles/LLVMDemangle.dir/MicrosoftDemangle.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Demangle && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMDemangle.dir/MicrosoftDemangle.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Demangle/MicrosoftDemangle.cpp

lib/Demangle/CMakeFiles/LLVMDemangle.dir/MicrosoftDemangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMDemangle.dir/MicrosoftDemangle.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Demangle && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Demangle/MicrosoftDemangle.cpp > CMakeFiles/LLVMDemangle.dir/MicrosoftDemangle.cpp.i

lib/Demangle/CMakeFiles/LLVMDemangle.dir/MicrosoftDemangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMDemangle.dir/MicrosoftDemangle.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Demangle && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Demangle/MicrosoftDemangle.cpp -o CMakeFiles/LLVMDemangle.dir/MicrosoftDemangle.cpp.s

lib/Demangle/CMakeFiles/LLVMDemangle.dir/MicrosoftDemangleNodes.cpp.o: lib/Demangle/CMakeFiles/LLVMDemangle.dir/flags.make
lib/Demangle/CMakeFiles/LLVMDemangle.dir/MicrosoftDemangleNodes.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Demangle/MicrosoftDemangleNodes.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object lib/Demangle/CMakeFiles/LLVMDemangle.dir/MicrosoftDemangleNodes.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Demangle && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMDemangle.dir/MicrosoftDemangleNodes.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Demangle/MicrosoftDemangleNodes.cpp

lib/Demangle/CMakeFiles/LLVMDemangle.dir/MicrosoftDemangleNodes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMDemangle.dir/MicrosoftDemangleNodes.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Demangle && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Demangle/MicrosoftDemangleNodes.cpp > CMakeFiles/LLVMDemangle.dir/MicrosoftDemangleNodes.cpp.i

lib/Demangle/CMakeFiles/LLVMDemangle.dir/MicrosoftDemangleNodes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMDemangle.dir/MicrosoftDemangleNodes.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Demangle && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Demangle/MicrosoftDemangleNodes.cpp -o CMakeFiles/LLVMDemangle.dir/MicrosoftDemangleNodes.cpp.s

lib/Demangle/CMakeFiles/LLVMDemangle.dir/RustDemangle.cpp.o: lib/Demangle/CMakeFiles/LLVMDemangle.dir/flags.make
lib/Demangle/CMakeFiles/LLVMDemangle.dir/RustDemangle.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Demangle/RustDemangle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object lib/Demangle/CMakeFiles/LLVMDemangle.dir/RustDemangle.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Demangle && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMDemangle.dir/RustDemangle.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Demangle/RustDemangle.cpp

lib/Demangle/CMakeFiles/LLVMDemangle.dir/RustDemangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMDemangle.dir/RustDemangle.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Demangle && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Demangle/RustDemangle.cpp > CMakeFiles/LLVMDemangle.dir/RustDemangle.cpp.i

lib/Demangle/CMakeFiles/LLVMDemangle.dir/RustDemangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMDemangle.dir/RustDemangle.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Demangle && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Demangle/RustDemangle.cpp -o CMakeFiles/LLVMDemangle.dir/RustDemangle.cpp.s

lib/Demangle/CMakeFiles/LLVMDemangle.dir/DLangDemangle.cpp.o: lib/Demangle/CMakeFiles/LLVMDemangle.dir/flags.make
lib/Demangle/CMakeFiles/LLVMDemangle.dir/DLangDemangle.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Demangle/DLangDemangle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object lib/Demangle/CMakeFiles/LLVMDemangle.dir/DLangDemangle.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Demangle && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMDemangle.dir/DLangDemangle.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Demangle/DLangDemangle.cpp

lib/Demangle/CMakeFiles/LLVMDemangle.dir/DLangDemangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMDemangle.dir/DLangDemangle.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Demangle && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Demangle/DLangDemangle.cpp > CMakeFiles/LLVMDemangle.dir/DLangDemangle.cpp.i

lib/Demangle/CMakeFiles/LLVMDemangle.dir/DLangDemangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMDemangle.dir/DLangDemangle.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Demangle && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Demangle/DLangDemangle.cpp -o CMakeFiles/LLVMDemangle.dir/DLangDemangle.cpp.s

# Object files for target LLVMDemangle
LLVMDemangle_OBJECTS = \
"CMakeFiles/LLVMDemangle.dir/Demangle.cpp.o" \
"CMakeFiles/LLVMDemangle.dir/ItaniumDemangle.cpp.o" \
"CMakeFiles/LLVMDemangle.dir/MicrosoftDemangle.cpp.o" \
"CMakeFiles/LLVMDemangle.dir/MicrosoftDemangleNodes.cpp.o" \
"CMakeFiles/LLVMDemangle.dir/RustDemangle.cpp.o" \
"CMakeFiles/LLVMDemangle.dir/DLangDemangle.cpp.o"

# External object files for target LLVMDemangle
LLVMDemangle_EXTERNAL_OBJECTS =

lib/libLLVMDemangle.so.17git: lib/Demangle/CMakeFiles/LLVMDemangle.dir/Demangle.cpp.o
lib/libLLVMDemangle.so.17git: lib/Demangle/CMakeFiles/LLVMDemangle.dir/ItaniumDemangle.cpp.o
lib/libLLVMDemangle.so.17git: lib/Demangle/CMakeFiles/LLVMDemangle.dir/MicrosoftDemangle.cpp.o
lib/libLLVMDemangle.so.17git: lib/Demangle/CMakeFiles/LLVMDemangle.dir/MicrosoftDemangleNodes.cpp.o
lib/libLLVMDemangle.so.17git: lib/Demangle/CMakeFiles/LLVMDemangle.dir/RustDemangle.cpp.o
lib/libLLVMDemangle.so.17git: lib/Demangle/CMakeFiles/LLVMDemangle.dir/DLangDemangle.cpp.o
lib/libLLVMDemangle.so.17git: lib/Demangle/CMakeFiles/LLVMDemangle.dir/build.make
lib/libLLVMDemangle.so.17git: lib/Demangle/CMakeFiles/LLVMDemangle.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX shared library ../libLLVMDemangle.so"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Demangle && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMDemangle.dir/link.txt --verbose=$(VERBOSE)
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Demangle && $(CMAKE_COMMAND) -E cmake_symlink_library ../libLLVMDemangle.so.17git ../libLLVMDemangle.so.17git ../libLLVMDemangle.so

lib/libLLVMDemangle.so: lib/libLLVMDemangle.so.17git
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libLLVMDemangle.so

# Rule to build all files generated by this target.
lib/Demangle/CMakeFiles/LLVMDemangle.dir/build: lib/libLLVMDemangle.so

.PHONY : lib/Demangle/CMakeFiles/LLVMDemangle.dir/build

lib/Demangle/CMakeFiles/LLVMDemangle.dir/clean:
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Demangle && $(CMAKE_COMMAND) -P CMakeFiles/LLVMDemangle.dir/cmake_clean.cmake
.PHONY : lib/Demangle/CMakeFiles/LLVMDemangle.dir/clean

lib/Demangle/CMakeFiles/LLVMDemangle.dir/depend:
	cd /home/user/Desktop/KK-projekat/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Desktop/KK-projekat/llvm-project/llvm /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Demangle /home/user/Desktop/KK-projekat/llvm-project/build /home/user/Desktop/KK-projekat/llvm-project/build/lib/Demangle /home/user/Desktop/KK-projekat/llvm-project/build/lib/Demangle/CMakeFiles/LLVMDemangle.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Demangle/CMakeFiles/LLVMDemangle.dir/depend
