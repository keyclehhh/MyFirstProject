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
CMAKE_SOURCE_DIR = "D:\code\3\Half Find"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\code\3\Half Find\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Half_Find.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Half_Find.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Half_Find.dir/flags.make

CMakeFiles/Half_Find.dir/main.cpp.obj: CMakeFiles/Half_Find.dir/flags.make
CMakeFiles/Half_Find.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\code\3\Half Find\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Half_Find.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Half_Find.dir\main.cpp.obj -c "D:\code\3\Half Find\main.cpp"

CMakeFiles/Half_Find.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Half_Find.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\code\3\Half Find\main.cpp" > CMakeFiles\Half_Find.dir\main.cpp.i

CMakeFiles/Half_Find.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Half_Find.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\code\3\Half Find\main.cpp" -o CMakeFiles\Half_Find.dir\main.cpp.s

# Object files for target Half_Find
Half_Find_OBJECTS = \
"CMakeFiles/Half_Find.dir/main.cpp.obj"

# External object files for target Half_Find
Half_Find_EXTERNAL_OBJECTS =

Half_Find.exe: CMakeFiles/Half_Find.dir/main.cpp.obj
Half_Find.exe: CMakeFiles/Half_Find.dir/build.make
Half_Find.exe: CMakeFiles/Half_Find.dir/linklibs.rsp
Half_Find.exe: CMakeFiles/Half_Find.dir/objects1.rsp
Half_Find.exe: CMakeFiles/Half_Find.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\code\3\Half Find\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Half_Find.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Half_Find.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Half_Find.dir/build: Half_Find.exe

.PHONY : CMakeFiles/Half_Find.dir/build

CMakeFiles/Half_Find.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Half_Find.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Half_Find.dir/clean

CMakeFiles/Half_Find.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\code\3\Half Find" "D:\code\3\Half Find" "D:\code\3\Half Find\cmake-build-debug" "D:\code\3\Half Find\cmake-build-debug" "D:\code\3\Half Find\cmake-build-debug\CMakeFiles\Half_Find.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Half_Find.dir/depend

