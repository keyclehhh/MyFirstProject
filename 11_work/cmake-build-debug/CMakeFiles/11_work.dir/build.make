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
CMAKE_SOURCE_DIR = D:\code\3\11_work

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\code\3\11_work\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/11_work.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/11_work.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/11_work.dir/flags.make

CMakeFiles/11_work.dir/main.cpp.obj: CMakeFiles/11_work.dir/flags.make
CMakeFiles/11_work.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\code\3\11_work\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/11_work.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\11_work.dir\main.cpp.obj -c D:\code\3\11_work\main.cpp

CMakeFiles/11_work.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/11_work.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\code\3\11_work\main.cpp > CMakeFiles\11_work.dir\main.cpp.i

CMakeFiles/11_work.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/11_work.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\code\3\11_work\main.cpp -o CMakeFiles\11_work.dir\main.cpp.s

# Object files for target 11_work
11_work_OBJECTS = \
"CMakeFiles/11_work.dir/main.cpp.obj"

# External object files for target 11_work
11_work_EXTERNAL_OBJECTS =

11_work.exe: CMakeFiles/11_work.dir/main.cpp.obj
11_work.exe: CMakeFiles/11_work.dir/build.make
11_work.exe: CMakeFiles/11_work.dir/linklibs.rsp
11_work.exe: CMakeFiles/11_work.dir/objects1.rsp
11_work.exe: CMakeFiles/11_work.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\code\3\11_work\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 11_work.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\11_work.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/11_work.dir/build: 11_work.exe

.PHONY : CMakeFiles/11_work.dir/build

CMakeFiles/11_work.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\11_work.dir\cmake_clean.cmake
.PHONY : CMakeFiles/11_work.dir/clean

CMakeFiles/11_work.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\code\3\11_work D:\code\3\11_work D:\code\3\11_work\cmake-build-debug D:\code\3\11_work\cmake-build-debug D:\code\3\11_work\cmake-build-debug\CMakeFiles\11_work.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/11_work.dir/depend

