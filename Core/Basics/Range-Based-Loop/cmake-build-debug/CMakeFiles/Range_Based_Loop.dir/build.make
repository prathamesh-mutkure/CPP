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
CMAKE_COMMAND = /snap/clion/73/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/73/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/prathamesh/Desktop/CPP/Core/Basics/Range-Based-Loop

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/prathamesh/Desktop/CPP/Core/Basics/Range-Based-Loop/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Range_Based_Loop.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Range_Based_Loop.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Range_Based_Loop.dir/flags.make

CMakeFiles/Range_Based_Loop.dir/main.cpp.o: CMakeFiles/Range_Based_Loop.dir/flags.make
CMakeFiles/Range_Based_Loop.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/prathamesh/Desktop/CPP/Core/Basics/Range-Based-Loop/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Range_Based_Loop.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Range_Based_Loop.dir/main.cpp.o -c /home/prathamesh/Desktop/CPP/Core/Basics/Range-Based-Loop/main.cpp

CMakeFiles/Range_Based_Loop.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Range_Based_Loop.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/prathamesh/Desktop/CPP/Core/Basics/Range-Based-Loop/main.cpp > CMakeFiles/Range_Based_Loop.dir/main.cpp.i

CMakeFiles/Range_Based_Loop.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Range_Based_Loop.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/prathamesh/Desktop/CPP/Core/Basics/Range-Based-Loop/main.cpp -o CMakeFiles/Range_Based_Loop.dir/main.cpp.s

# Object files for target Range_Based_Loop
Range_Based_Loop_OBJECTS = \
"CMakeFiles/Range_Based_Loop.dir/main.cpp.o"

# External object files for target Range_Based_Loop
Range_Based_Loop_EXTERNAL_OBJECTS =

Range_Based_Loop: CMakeFiles/Range_Based_Loop.dir/main.cpp.o
Range_Based_Loop: CMakeFiles/Range_Based_Loop.dir/build.make
Range_Based_Loop: CMakeFiles/Range_Based_Loop.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/prathamesh/Desktop/CPP/Core/Basics/Range-Based-Loop/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Range_Based_Loop"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Range_Based_Loop.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Range_Based_Loop.dir/build: Range_Based_Loop

.PHONY : CMakeFiles/Range_Based_Loop.dir/build

CMakeFiles/Range_Based_Loop.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Range_Based_Loop.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Range_Based_Loop.dir/clean

CMakeFiles/Range_Based_Loop.dir/depend:
	cd /home/prathamesh/Desktop/CPP/Core/Basics/Range-Based-Loop/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/prathamesh/Desktop/CPP/Core/Basics/Range-Based-Loop /home/prathamesh/Desktop/CPP/Core/Basics/Range-Based-Loop /home/prathamesh/Desktop/CPP/Core/Basics/Range-Based-Loop/cmake-build-debug /home/prathamesh/Desktop/CPP/Core/Basics/Range-Based-Loop/cmake-build-debug /home/prathamesh/Desktop/CPP/Core/Basics/Range-Based-Loop/cmake-build-debug/CMakeFiles/Range_Based_Loop.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Range_Based_Loop.dir/depend

