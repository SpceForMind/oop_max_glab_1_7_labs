# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /home/spaceformind/clion-2019.1.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/spaceformind/clion-2019.1.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/spaceformind/CLionProjects/MaxGlavOOP_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/spaceformind/CLionProjects/MaxGlavOOP_1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MaxGlavOOOp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MaxGlavOOOp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MaxGlavOOOp.dir/flags.make

CMakeFiles/MaxGlavOOOp.dir/main.cpp.o: CMakeFiles/MaxGlavOOOp.dir/flags.make
CMakeFiles/MaxGlavOOOp.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/spaceformind/CLionProjects/MaxGlavOOP_1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MaxGlavOOOp.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MaxGlavOOOp.dir/main.cpp.o -c /home/spaceformind/CLionProjects/MaxGlavOOP_1/main.cpp

CMakeFiles/MaxGlavOOOp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MaxGlavOOOp.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/spaceformind/CLionProjects/MaxGlavOOP_1/main.cpp > CMakeFiles/MaxGlavOOOp.dir/main.cpp.i

CMakeFiles/MaxGlavOOOp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MaxGlavOOOp.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/spaceformind/CLionProjects/MaxGlavOOP_1/main.cpp -o CMakeFiles/MaxGlavOOOp.dir/main.cpp.s

CMakeFiles/MaxGlavOOOp.dir/fraction.cpp.o: CMakeFiles/MaxGlavOOOp.dir/flags.make
CMakeFiles/MaxGlavOOOp.dir/fraction.cpp.o: ../fraction.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/spaceformind/CLionProjects/MaxGlavOOP_1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/MaxGlavOOOp.dir/fraction.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MaxGlavOOOp.dir/fraction.cpp.o -c /home/spaceformind/CLionProjects/MaxGlavOOP_1/fraction.cpp

CMakeFiles/MaxGlavOOOp.dir/fraction.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MaxGlavOOOp.dir/fraction.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/spaceformind/CLionProjects/MaxGlavOOP_1/fraction.cpp > CMakeFiles/MaxGlavOOOp.dir/fraction.cpp.i

CMakeFiles/MaxGlavOOOp.dir/fraction.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MaxGlavOOOp.dir/fraction.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/spaceformind/CLionProjects/MaxGlavOOP_1/fraction.cpp -o CMakeFiles/MaxGlavOOOp.dir/fraction.cpp.s

# Object files for target MaxGlavOOOp
MaxGlavOOOp_OBJECTS = \
"CMakeFiles/MaxGlavOOOp.dir/main.cpp.o" \
"CMakeFiles/MaxGlavOOOp.dir/fraction.cpp.o"

# External object files for target MaxGlavOOOp
MaxGlavOOOp_EXTERNAL_OBJECTS =

MaxGlavOOOp: CMakeFiles/MaxGlavOOOp.dir/main.cpp.o
MaxGlavOOOp: CMakeFiles/MaxGlavOOOp.dir/fraction.cpp.o
MaxGlavOOOp: CMakeFiles/MaxGlavOOOp.dir/build.make
MaxGlavOOOp: CMakeFiles/MaxGlavOOOp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/spaceformind/CLionProjects/MaxGlavOOP_1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable MaxGlavOOOp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MaxGlavOOOp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MaxGlavOOOp.dir/build: MaxGlavOOOp

.PHONY : CMakeFiles/MaxGlavOOOp.dir/build

CMakeFiles/MaxGlavOOOp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MaxGlavOOOp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MaxGlavOOOp.dir/clean

CMakeFiles/MaxGlavOOOp.dir/depend:
	cd /home/spaceformind/CLionProjects/MaxGlavOOP_1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/spaceformind/CLionProjects/MaxGlavOOP_1 /home/spaceformind/CLionProjects/MaxGlavOOP_1 /home/spaceformind/CLionProjects/MaxGlavOOP_1/cmake-build-debug /home/spaceformind/CLionProjects/MaxGlavOOP_1/cmake-build-debug /home/spaceformind/CLionProjects/MaxGlavOOP_1/cmake-build-debug/CMakeFiles/MaxGlavOOOp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MaxGlavOOOp.dir/depend

