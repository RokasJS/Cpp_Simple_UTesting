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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\djrok\Documents\Cpp_Simple_UTesting

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\djrok\Documents\Cpp_Simple_UTesting\build

# Include any dependencies generated for this target.
include Src/CMakeFiles/runTests.dir/depend.make

# Include the progress variables for this target.
include Src/CMakeFiles/runTests.dir/progress.make

# Include the compile flags for this target's objects.
include Src/CMakeFiles/runTests.dir/flags.make

Src/CMakeFiles/runTests.dir/main.cpp.obj: Src/CMakeFiles/runTests.dir/flags.make
Src/CMakeFiles/runTests.dir/main.cpp.obj: Src/CMakeFiles/runTests.dir/includes_CXX.rsp
Src/CMakeFiles/runTests.dir/main.cpp.obj: ../Src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\djrok\Documents\Cpp_Simple_UTesting\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Src/CMakeFiles/runTests.dir/main.cpp.obj"
	cd /d C:\Users\djrok\Documents\Cpp_Simple_UTesting\build\Src && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\runTests.dir\main.cpp.obj -c C:\Users\djrok\Documents\Cpp_Simple_UTesting\Src\main.cpp

Src/CMakeFiles/runTests.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/runTests.dir/main.cpp.i"
	cd /d C:\Users\djrok\Documents\Cpp_Simple_UTesting\build\Src && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\djrok\Documents\Cpp_Simple_UTesting\Src\main.cpp > CMakeFiles\runTests.dir\main.cpp.i

Src/CMakeFiles/runTests.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/runTests.dir/main.cpp.s"
	cd /d C:\Users\djrok\Documents\Cpp_Simple_UTesting\build\Src && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\djrok\Documents\Cpp_Simple_UTesting\Src\main.cpp -o CMakeFiles\runTests.dir\main.cpp.s

# Object files for target runTests
runTests_OBJECTS = \
"CMakeFiles/runTests.dir/main.cpp.obj"

# External object files for target runTests
runTests_EXTERNAL_OBJECTS =

Src/runTests.exe: Src/CMakeFiles/runTests.dir/main.cpp.obj
Src/runTests.exe: Src/CMakeFiles/runTests.dir/build.make
Src/runTests.exe: Tests/libtests.dll.a
Src/runTests.exe: Src/CMakeFiles/runTests.dir/linklibs.rsp
Src/runTests.exe: Src/CMakeFiles/runTests.dir/objects1.rsp
Src/runTests.exe: Src/CMakeFiles/runTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\djrok\Documents\Cpp_Simple_UTesting\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable runTests.exe"
	cd /d C:\Users\djrok\Documents\Cpp_Simple_UTesting\build\Src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\runTests.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Src/CMakeFiles/runTests.dir/build: Src/runTests.exe

.PHONY : Src/CMakeFiles/runTests.dir/build

Src/CMakeFiles/runTests.dir/clean:
	cd /d C:\Users\djrok\Documents\Cpp_Simple_UTesting\build\Src && $(CMAKE_COMMAND) -P CMakeFiles\runTests.dir\cmake_clean.cmake
.PHONY : Src/CMakeFiles/runTests.dir/clean

Src/CMakeFiles/runTests.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\djrok\Documents\Cpp_Simple_UTesting C:\Users\djrok\Documents\Cpp_Simple_UTesting\Src C:\Users\djrok\Documents\Cpp_Simple_UTesting\build C:\Users\djrok\Documents\Cpp_Simple_UTesting\build\Src C:\Users\djrok\Documents\Cpp_Simple_UTesting\build\Src\CMakeFiles\runTests.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : Src/CMakeFiles/runTests.dir/depend
