# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\jonat\Documents\C++\SimulatedAnnealing

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\jonat\Documents\C++\SimulatedAnnealing\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SimulatedAnnealing.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SimulatedAnnealing.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SimulatedAnnealing.dir/flags.make

CMakeFiles/SimulatedAnnealing.dir/main.cpp.obj: CMakeFiles/SimulatedAnnealing.dir/flags.make
CMakeFiles/SimulatedAnnealing.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jonat\Documents\C++\SimulatedAnnealing\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SimulatedAnnealing.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SimulatedAnnealing.dir\main.cpp.obj -c C:\Users\jonat\Documents\C++\SimulatedAnnealing\main.cpp

CMakeFiles/SimulatedAnnealing.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SimulatedAnnealing.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jonat\Documents\C++\SimulatedAnnealing\main.cpp > CMakeFiles\SimulatedAnnealing.dir\main.cpp.i

CMakeFiles/SimulatedAnnealing.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SimulatedAnnealing.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jonat\Documents\C++\SimulatedAnnealing\main.cpp -o CMakeFiles\SimulatedAnnealing.dir\main.cpp.s

CMakeFiles/SimulatedAnnealing.dir/Point.cpp.obj: CMakeFiles/SimulatedAnnealing.dir/flags.make
CMakeFiles/SimulatedAnnealing.dir/Point.cpp.obj: ../Point.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jonat\Documents\C++\SimulatedAnnealing\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/SimulatedAnnealing.dir/Point.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SimulatedAnnealing.dir\Point.cpp.obj -c C:\Users\jonat\Documents\C++\SimulatedAnnealing\Point.cpp

CMakeFiles/SimulatedAnnealing.dir/Point.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SimulatedAnnealing.dir/Point.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jonat\Documents\C++\SimulatedAnnealing\Point.cpp > CMakeFiles\SimulatedAnnealing.dir\Point.cpp.i

CMakeFiles/SimulatedAnnealing.dir/Point.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SimulatedAnnealing.dir/Point.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jonat\Documents\C++\SimulatedAnnealing\Point.cpp -o CMakeFiles\SimulatedAnnealing.dir\Point.cpp.s

CMakeFiles/SimulatedAnnealing.dir/Partition.cpp.obj: CMakeFiles/SimulatedAnnealing.dir/flags.make
CMakeFiles/SimulatedAnnealing.dir/Partition.cpp.obj: ../Partition.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jonat\Documents\C++\SimulatedAnnealing\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/SimulatedAnnealing.dir/Partition.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SimulatedAnnealing.dir\Partition.cpp.obj -c C:\Users\jonat\Documents\C++\SimulatedAnnealing\Partition.cpp

CMakeFiles/SimulatedAnnealing.dir/Partition.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SimulatedAnnealing.dir/Partition.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jonat\Documents\C++\SimulatedAnnealing\Partition.cpp > CMakeFiles\SimulatedAnnealing.dir\Partition.cpp.i

CMakeFiles/SimulatedAnnealing.dir/Partition.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SimulatedAnnealing.dir/Partition.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jonat\Documents\C++\SimulatedAnnealing\Partition.cpp -o CMakeFiles\SimulatedAnnealing.dir\Partition.cpp.s

# Object files for target SimulatedAnnealing
SimulatedAnnealing_OBJECTS = \
"CMakeFiles/SimulatedAnnealing.dir/main.cpp.obj" \
"CMakeFiles/SimulatedAnnealing.dir/Point.cpp.obj" \
"CMakeFiles/SimulatedAnnealing.dir/Partition.cpp.obj"

# External object files for target SimulatedAnnealing
SimulatedAnnealing_EXTERNAL_OBJECTS =

SimulatedAnnealing.exe: CMakeFiles/SimulatedAnnealing.dir/main.cpp.obj
SimulatedAnnealing.exe: CMakeFiles/SimulatedAnnealing.dir/Point.cpp.obj
SimulatedAnnealing.exe: CMakeFiles/SimulatedAnnealing.dir/Partition.cpp.obj
SimulatedAnnealing.exe: CMakeFiles/SimulatedAnnealing.dir/build.make
SimulatedAnnealing.exe: CMakeFiles/SimulatedAnnealing.dir/linklibs.rsp
SimulatedAnnealing.exe: CMakeFiles/SimulatedAnnealing.dir/objects1.rsp
SimulatedAnnealing.exe: CMakeFiles/SimulatedAnnealing.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\jonat\Documents\C++\SimulatedAnnealing\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable SimulatedAnnealing.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SimulatedAnnealing.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SimulatedAnnealing.dir/build: SimulatedAnnealing.exe

.PHONY : CMakeFiles/SimulatedAnnealing.dir/build

CMakeFiles/SimulatedAnnealing.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SimulatedAnnealing.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SimulatedAnnealing.dir/clean

CMakeFiles/SimulatedAnnealing.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\jonat\Documents\C++\SimulatedAnnealing C:\Users\jonat\Documents\C++\SimulatedAnnealing C:\Users\jonat\Documents\C++\SimulatedAnnealing\cmake-build-debug C:\Users\jonat\Documents\C++\SimulatedAnnealing\cmake-build-debug C:\Users\jonat\Documents\C++\SimulatedAnnealing\cmake-build-debug\CMakeFiles\SimulatedAnnealing.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SimulatedAnnealing.dir/depend

