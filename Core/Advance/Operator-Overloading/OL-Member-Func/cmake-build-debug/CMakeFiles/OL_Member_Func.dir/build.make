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
CMAKE_SOURCE_DIR = /home/prathamesh/Desktop/CPP/Core/Advance/Operator-Overloading/OL-Member-Func

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/prathamesh/Desktop/CPP/Core/Advance/Operator-Overloading/OL-Member-Func/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/OL_Member_Func.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/OL_Member_Func.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/OL_Member_Func.dir/flags.make

CMakeFiles/OL_Member_Func.dir/main.cpp.o: CMakeFiles/OL_Member_Func.dir/flags.make
CMakeFiles/OL_Member_Func.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/prathamesh/Desktop/CPP/Core/Advance/Operator-Overloading/OL-Member-Func/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/OL_Member_Func.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OL_Member_Func.dir/main.cpp.o -c /home/prathamesh/Desktop/CPP/Core/Advance/Operator-Overloading/OL-Member-Func/main.cpp

CMakeFiles/OL_Member_Func.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OL_Member_Func.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/prathamesh/Desktop/CPP/Core/Advance/Operator-Overloading/OL-Member-Func/main.cpp > CMakeFiles/OL_Member_Func.dir/main.cpp.i

CMakeFiles/OL_Member_Func.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OL_Member_Func.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/prathamesh/Desktop/CPP/Core/Advance/Operator-Overloading/OL-Member-Func/main.cpp -o CMakeFiles/OL_Member_Func.dir/main.cpp.s

CMakeFiles/OL_Member_Func.dir/Mystring.cpp.o: CMakeFiles/OL_Member_Func.dir/flags.make
CMakeFiles/OL_Member_Func.dir/Mystring.cpp.o: ../Mystring.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/prathamesh/Desktop/CPP/Core/Advance/Operator-Overloading/OL-Member-Func/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/OL_Member_Func.dir/Mystring.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OL_Member_Func.dir/Mystring.cpp.o -c /home/prathamesh/Desktop/CPP/Core/Advance/Operator-Overloading/OL-Member-Func/Mystring.cpp

CMakeFiles/OL_Member_Func.dir/Mystring.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OL_Member_Func.dir/Mystring.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/prathamesh/Desktop/CPP/Core/Advance/Operator-Overloading/OL-Member-Func/Mystring.cpp > CMakeFiles/OL_Member_Func.dir/Mystring.cpp.i

CMakeFiles/OL_Member_Func.dir/Mystring.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OL_Member_Func.dir/Mystring.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/prathamesh/Desktop/CPP/Core/Advance/Operator-Overloading/OL-Member-Func/Mystring.cpp -o CMakeFiles/OL_Member_Func.dir/Mystring.cpp.s

# Object files for target OL_Member_Func
OL_Member_Func_OBJECTS = \
"CMakeFiles/OL_Member_Func.dir/main.cpp.o" \
"CMakeFiles/OL_Member_Func.dir/Mystring.cpp.o"

# External object files for target OL_Member_Func
OL_Member_Func_EXTERNAL_OBJECTS =

OL_Member_Func: CMakeFiles/OL_Member_Func.dir/main.cpp.o
OL_Member_Func: CMakeFiles/OL_Member_Func.dir/Mystring.cpp.o
OL_Member_Func: CMakeFiles/OL_Member_Func.dir/build.make
OL_Member_Func: CMakeFiles/OL_Member_Func.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/prathamesh/Desktop/CPP/Core/Advance/Operator-Overloading/OL-Member-Func/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable OL_Member_Func"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/OL_Member_Func.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/OL_Member_Func.dir/build: OL_Member_Func

.PHONY : CMakeFiles/OL_Member_Func.dir/build

CMakeFiles/OL_Member_Func.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/OL_Member_Func.dir/cmake_clean.cmake
.PHONY : CMakeFiles/OL_Member_Func.dir/clean

CMakeFiles/OL_Member_Func.dir/depend:
	cd /home/prathamesh/Desktop/CPP/Core/Advance/Operator-Overloading/OL-Member-Func/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/prathamesh/Desktop/CPP/Core/Advance/Operator-Overloading/OL-Member-Func /home/prathamesh/Desktop/CPP/Core/Advance/Operator-Overloading/OL-Member-Func /home/prathamesh/Desktop/CPP/Core/Advance/Operator-Overloading/OL-Member-Func/cmake-build-debug /home/prathamesh/Desktop/CPP/Core/Advance/Operator-Overloading/OL-Member-Func/cmake-build-debug /home/prathamesh/Desktop/CPP/Core/Advance/Operator-Overloading/OL-Member-Func/cmake-build-debug/CMakeFiles/OL_Member_Func.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/OL_Member_Func.dir/depend
