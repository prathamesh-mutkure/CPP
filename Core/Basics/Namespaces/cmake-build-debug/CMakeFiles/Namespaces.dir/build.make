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
CMAKE_COMMAND = /snap/clion/82/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/82/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/prathamesh/Desktop/CPP/Core/Basics/Namespaces

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/prathamesh/Desktop/CPP/Core/Basics/Namespaces/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Namespaces.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Namespaces.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Namespaces.dir/flags.make

CMakeFiles/Namespaces.dir/main.cpp.o: CMakeFiles/Namespaces.dir/flags.make
CMakeFiles/Namespaces.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/prathamesh/Desktop/CPP/Core/Basics/Namespaces/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Namespaces.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Namespaces.dir/main.cpp.o -c /home/prathamesh/Desktop/CPP/Core/Basics/Namespaces/main.cpp

CMakeFiles/Namespaces.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Namespaces.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/prathamesh/Desktop/CPP/Core/Basics/Namespaces/main.cpp > CMakeFiles/Namespaces.dir/main.cpp.i

CMakeFiles/Namespaces.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Namespaces.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/prathamesh/Desktop/CPP/Core/Basics/Namespaces/main.cpp -o CMakeFiles/Namespaces.dir/main.cpp.s

# Object files for target Namespaces
Namespaces_OBJECTS = \
"CMakeFiles/Namespaces.dir/main.cpp.o"

# External object files for target Namespaces
Namespaces_EXTERNAL_OBJECTS =

Namespaces: CMakeFiles/Namespaces.dir/main.cpp.o
Namespaces: CMakeFiles/Namespaces.dir/build.make
Namespaces: CMakeFiles/Namespaces.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/prathamesh/Desktop/CPP/Core/Basics/Namespaces/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Namespaces"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Namespaces.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Namespaces.dir/build: Namespaces

.PHONY : CMakeFiles/Namespaces.dir/build

CMakeFiles/Namespaces.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Namespaces.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Namespaces.dir/clean

CMakeFiles/Namespaces.dir/depend:
	cd /home/prathamesh/Desktop/CPP/Core/Basics/Namespaces/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/prathamesh/Desktop/CPP/Core/Basics/Namespaces /home/prathamesh/Desktop/CPP/Core/Basics/Namespaces /home/prathamesh/Desktop/CPP/Core/Basics/Namespaces/cmake-build-debug /home/prathamesh/Desktop/CPP/Core/Basics/Namespaces/cmake-build-debug /home/prathamesh/Desktop/CPP/Core/Basics/Namespaces/cmake-build-debug/CMakeFiles/Namespaces.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Namespaces.dir/depend

