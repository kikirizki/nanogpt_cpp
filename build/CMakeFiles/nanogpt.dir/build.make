# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kiki/nanogpt_cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kiki/nanogpt_cpp/build

# Include any dependencies generated for this target.
include CMakeFiles/nanogpt.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/nanogpt.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/nanogpt.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/nanogpt.dir/flags.make

CMakeFiles/nanogpt.dir/main.cpp.o: CMakeFiles/nanogpt.dir/flags.make
CMakeFiles/nanogpt.dir/main.cpp.o: ../main.cpp
CMakeFiles/nanogpt.dir/main.cpp.o: CMakeFiles/nanogpt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kiki/nanogpt_cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/nanogpt.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/nanogpt.dir/main.cpp.o -MF CMakeFiles/nanogpt.dir/main.cpp.o.d -o CMakeFiles/nanogpt.dir/main.cpp.o -c /home/kiki/nanogpt_cpp/main.cpp

CMakeFiles/nanogpt.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nanogpt.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kiki/nanogpt_cpp/main.cpp > CMakeFiles/nanogpt.dir/main.cpp.i

CMakeFiles/nanogpt.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nanogpt.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kiki/nanogpt_cpp/main.cpp -o CMakeFiles/nanogpt.dir/main.cpp.s

CMakeFiles/nanogpt.dir/dataset.cpp.o: CMakeFiles/nanogpt.dir/flags.make
CMakeFiles/nanogpt.dir/dataset.cpp.o: ../dataset.cpp
CMakeFiles/nanogpt.dir/dataset.cpp.o: CMakeFiles/nanogpt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kiki/nanogpt_cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/nanogpt.dir/dataset.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/nanogpt.dir/dataset.cpp.o -MF CMakeFiles/nanogpt.dir/dataset.cpp.o.d -o CMakeFiles/nanogpt.dir/dataset.cpp.o -c /home/kiki/nanogpt_cpp/dataset.cpp

CMakeFiles/nanogpt.dir/dataset.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nanogpt.dir/dataset.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kiki/nanogpt_cpp/dataset.cpp > CMakeFiles/nanogpt.dir/dataset.cpp.i

CMakeFiles/nanogpt.dir/dataset.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nanogpt.dir/dataset.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kiki/nanogpt_cpp/dataset.cpp -o CMakeFiles/nanogpt.dir/dataset.cpp.s

# Object files for target nanogpt
nanogpt_OBJECTS = \
"CMakeFiles/nanogpt.dir/main.cpp.o" \
"CMakeFiles/nanogpt.dir/dataset.cpp.o"

# External object files for target nanogpt
nanogpt_EXTERNAL_OBJECTS =

nanogpt: CMakeFiles/nanogpt.dir/main.cpp.o
nanogpt: CMakeFiles/nanogpt.dir/dataset.cpp.o
nanogpt: CMakeFiles/nanogpt.dir/build.make
nanogpt: CMakeFiles/nanogpt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kiki/nanogpt_cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable nanogpt"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/nanogpt.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/nanogpt.dir/build: nanogpt
.PHONY : CMakeFiles/nanogpt.dir/build

CMakeFiles/nanogpt.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/nanogpt.dir/cmake_clean.cmake
.PHONY : CMakeFiles/nanogpt.dir/clean

CMakeFiles/nanogpt.dir/depend:
	cd /home/kiki/nanogpt_cpp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kiki/nanogpt_cpp /home/kiki/nanogpt_cpp /home/kiki/nanogpt_cpp/build /home/kiki/nanogpt_cpp/build /home/kiki/nanogpt_cpp/build/CMakeFiles/nanogpt.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/nanogpt.dir/depend
