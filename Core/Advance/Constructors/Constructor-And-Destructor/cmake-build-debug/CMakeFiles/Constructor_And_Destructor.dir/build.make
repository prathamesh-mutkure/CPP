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
CMAKE_SOURCE_DIR = /home/prathamesh/Desktop/CPP/Core/Advance/OOP/Constructor-And-Destructor

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/prathamesh/Desktop/CPP/Core/Advance/OOP/Constructor-And-Destructor/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Constructor_And_Destructor.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Constructor_And_Destructor.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Constructor_And_Destructor.dir/flags.make

CMakeFiles/Constructor_And_Destructor.dir/src/main.cpp.o: CMakeFiles/Constructor_And_Destructor.dir/flags.make
CMakeFiles/Constructor_And_Destructor.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/prathamesh/Desktop/CPP/Core/Advance/OOP/Constructor-And-Destructor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Constructor_And_Destructor.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Constructor_And_Destructor.dir/src/main.cpp.o -c /home/prathamesh/Desktop/CPP/Core/Advance/OOP/Constructor-And-Destructor/src/main.cpp

CMakeFiles/Constructor_And_Destructor.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Constructor_And_Destructor.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/prathamesh/Desktop/CPP/Core/Advance/OOP/Constructor-And-Destructor/src/main.cpp > CMakeFiles/Constructor_And_Destructor.dir/src/main.cpp.i

CMakeFiles/Constructor_And_Destructor.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Constructor_And_Destructor.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/prathamesh/Desktop/CPP/Core/Advance/OOP/Constructor-And-Destructor/src/main.cpp -o CMakeFiles/Constructor_And_Destructor.dir/src/main.cpp.s

CMakeFiles/Constructor_And_Destructor.dir/src/Player.cpp.o: CMakeFiles/Constructor_And_Destructor.dir/flags.make
CMakeFiles/Constructor_And_Destructor.dir/src/Player.cpp.o: ../src/Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/prathamesh/Desktop/CPP/Core/Advance/OOP/Constructor-And-Destructor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Constructor_And_Destructor.dir/src/Player.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Constructor_And_Destructor.dir/src/Player.cpp.o -c /home/prathamesh/Desktop/CPP/Core/Advance/OOP/Constructor-And-Destructor/src/Player.cpp

CMakeFiles/Constructor_And_Destructor.dir/src/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Constructor_And_Destructor.dir/src/Player.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/prathamesh/Desktop/CPP/Core/Advance/OOP/Constructor-And-Destructor/src/Player.cpp > CMakeFiles/Constructor_And_Destructor.dir/src/Player.cpp.i

CMakeFiles/Constructor_And_Destructor.dir/src/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Constructor_And_Destructor.dir/src/Player.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/prathamesh/Desktop/CPP/Core/Advance/OOP/Constructor-And-Destructor/src/Player.cpp -o CMakeFiles/Constructor_And_Destructor.dir/src/Player.cpp.s

# Object files for target Constructor_And_Destructor
Constructor_And_Destructor_OBJECTS = \
"CMakeFiles/Constructor_And_Destructor.dir/src/main.cpp.o" \
"CMakeFiles/Constructor_And_Destructor.dir/src/Player.cpp.o"

# External object files for target Constructor_And_Destructor
Constructor_And_Destructor_EXTERNAL_OBJECTS =

Constructor_And_Destructor: CMakeFiles/Constructor_And_Destructor.dir/src/main.cpp.o
Constructor_And_Destructor: CMakeFiles/Constructor_And_Destructor.dir/src/Player.cpp.o
Constructor_And_Destructor: CMakeFiles/Constructor_And_Destructor.dir/build.make
Constructor_And_Destructor: CMakeFiles/Constructor_And_Destructor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/prathamesh/Desktop/CPP/Core/Advance/OOP/Constructor-And-Destructor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Constructor_And_Destructor"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Constructor_And_Destructor.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Constructor_And_Destructor.dir/build: Constructor_And_Destructor

.PHONY : CMakeFiles/Constructor_And_Destructor.dir/build

CMakeFiles/Constructor_And_Destructor.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Constructor_And_Destructor.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Constructor_And_Destructor.dir/clean

CMakeFiles/Constructor_And_Destructor.dir/depend:
	cd /home/prathamesh/Desktop/CPP/Core/Advance/OOP/Constructor-And-Destructor/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/prathamesh/Desktop/CPP/Core/Advance/OOP/Constructor-And-Destructor /home/prathamesh/Desktop/CPP/Core/Advance/OOP/Constructor-And-Destructor /home/prathamesh/Desktop/CPP/Core/Advance/OOP/Constructor-And-Destructor/cmake-build-debug /home/prathamesh/Desktop/CPP/Core/Advance/OOP/Constructor-And-Destructor/cmake-build-debug /home/prathamesh/Desktop/CPP/Core/Advance/OOP/Constructor-And-Destructor/cmake-build-debug/CMakeFiles/Constructor_And_Destructor.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Constructor_And_Destructor.dir/depend
