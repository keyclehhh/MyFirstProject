# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\code\3\Sqlist

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\code\3\Sqlist\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Sqlist.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Sqlist.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Sqlist.dir/flags.make

CMakeFiles/Sqlist.dir/main.cpp.obj: CMakeFiles/Sqlist.dir/flags.make
CMakeFiles/Sqlist.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\code\3\Sqlist\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Sqlist.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Sqlist.dir\main.cpp.obj -c D:\code\3\Sqlist\main.cpp

CMakeFiles/Sqlist.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sqlist.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\code\3\Sqlist\main.cpp > CMakeFiles\Sqlist.dir\main.cpp.i

CMakeFiles/Sqlist.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sqlist.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\code\3\Sqlist\main.cpp -o CMakeFiles\Sqlist.dir\main.cpp.s

# Object files for target Sqlist
Sqlist_OBJECTS = \
"CMakeFiles/Sqlist.dir/main.cpp.obj"

# External object files for target Sqlist
Sqlist_EXTERNAL_OBJECTS =

Sqlist.exe: CMakeFiles/Sqlist.dir/main.cpp.obj
Sqlist.exe: CMakeFiles/Sqlist.dir/build.make
Sqlist.exe: CMakeFiles/Sqlist.dir/linklibs.rsp
Sqlist.exe: CMakeFiles/Sqlist.dir/objects1.rsp
Sqlist.exe: CMakeFiles/Sqlist.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\code\3\Sqlist\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Sqlist.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Sqlist.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Sqlist.dir/build: Sqlist.exe

.PHONY : CMakeFiles/Sqlist.dir/build

CMakeFiles/Sqlist.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Sqlist.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Sqlist.dir/clean

CMakeFiles/Sqlist.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\code\3\Sqlist D:\code\3\Sqlist D:\code\3\Sqlist\cmake-build-debug D:\code\3\Sqlist\cmake-build-debug D:\code\3\Sqlist\cmake-build-debug\CMakeFiles\Sqlist.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Sqlist.dir/depend
