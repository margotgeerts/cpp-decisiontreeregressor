# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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

# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.21.3_1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.21.3_1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/margotgeerts/Documents/CPP-DecisionTreeRegressor/CPP-DecisionTreeRegressor

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/margotgeerts/Documents/CPP-DecisionTreeRegressor/CPP-DecisionTreeRegressor/build

# Include any dependencies generated for this target.
include CMakeFiles/RegressionTree.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/RegressionTree.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/RegressionTree.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RegressionTree.dir/flags.make

CMakeFiles/RegressionTree.dir/Node.cpp.o: CMakeFiles/RegressionTree.dir/flags.make
CMakeFiles/RegressionTree.dir/Node.cpp.o: ../Node.cpp
CMakeFiles/RegressionTree.dir/Node.cpp.o: CMakeFiles/RegressionTree.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/margotgeerts/Documents/CPP-DecisionTreeRegressor/CPP-DecisionTreeRegressor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/RegressionTree.dir/Node.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/RegressionTree.dir/Node.cpp.o -MF CMakeFiles/RegressionTree.dir/Node.cpp.o.d -o CMakeFiles/RegressionTree.dir/Node.cpp.o -c /Users/margotgeerts/Documents/CPP-DecisionTreeRegressor/CPP-DecisionTreeRegressor/Node.cpp

CMakeFiles/RegressionTree.dir/Node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RegressionTree.dir/Node.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/margotgeerts/Documents/CPP-DecisionTreeRegressor/CPP-DecisionTreeRegressor/Node.cpp > CMakeFiles/RegressionTree.dir/Node.cpp.i

CMakeFiles/RegressionTree.dir/Node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RegressionTree.dir/Node.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/margotgeerts/Documents/CPP-DecisionTreeRegressor/CPP-DecisionTreeRegressor/Node.cpp -o CMakeFiles/RegressionTree.dir/Node.cpp.s

CMakeFiles/RegressionTree.dir/CSVReader.cpp.o: CMakeFiles/RegressionTree.dir/flags.make
CMakeFiles/RegressionTree.dir/CSVReader.cpp.o: ../CSVReader.cpp
CMakeFiles/RegressionTree.dir/CSVReader.cpp.o: CMakeFiles/RegressionTree.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/margotgeerts/Documents/CPP-DecisionTreeRegressor/CPP-DecisionTreeRegressor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/RegressionTree.dir/CSVReader.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/RegressionTree.dir/CSVReader.cpp.o -MF CMakeFiles/RegressionTree.dir/CSVReader.cpp.o.d -o CMakeFiles/RegressionTree.dir/CSVReader.cpp.o -c /Users/margotgeerts/Documents/CPP-DecisionTreeRegressor/CPP-DecisionTreeRegressor/CSVReader.cpp

CMakeFiles/RegressionTree.dir/CSVReader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RegressionTree.dir/CSVReader.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/margotgeerts/Documents/CPP-DecisionTreeRegressor/CPP-DecisionTreeRegressor/CSVReader.cpp > CMakeFiles/RegressionTree.dir/CSVReader.cpp.i

CMakeFiles/RegressionTree.dir/CSVReader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RegressionTree.dir/CSVReader.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/margotgeerts/Documents/CPP-DecisionTreeRegressor/CPP-DecisionTreeRegressor/CSVReader.cpp -o CMakeFiles/RegressionTree.dir/CSVReader.cpp.s

CMakeFiles/RegressionTree.dir/main.cpp.o: CMakeFiles/RegressionTree.dir/flags.make
CMakeFiles/RegressionTree.dir/main.cpp.o: ../main.cpp
CMakeFiles/RegressionTree.dir/main.cpp.o: CMakeFiles/RegressionTree.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/margotgeerts/Documents/CPP-DecisionTreeRegressor/CPP-DecisionTreeRegressor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/RegressionTree.dir/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/RegressionTree.dir/main.cpp.o -MF CMakeFiles/RegressionTree.dir/main.cpp.o.d -o CMakeFiles/RegressionTree.dir/main.cpp.o -c /Users/margotgeerts/Documents/CPP-DecisionTreeRegressor/CPP-DecisionTreeRegressor/main.cpp

CMakeFiles/RegressionTree.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RegressionTree.dir/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/margotgeerts/Documents/CPP-DecisionTreeRegressor/CPP-DecisionTreeRegressor/main.cpp > CMakeFiles/RegressionTree.dir/main.cpp.i

CMakeFiles/RegressionTree.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RegressionTree.dir/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/margotgeerts/Documents/CPP-DecisionTreeRegressor/CPP-DecisionTreeRegressor/main.cpp -o CMakeFiles/RegressionTree.dir/main.cpp.s

# Object files for target RegressionTree
RegressionTree_OBJECTS = \
"CMakeFiles/RegressionTree.dir/Node.cpp.o" \
"CMakeFiles/RegressionTree.dir/CSVReader.cpp.o" \
"CMakeFiles/RegressionTree.dir/main.cpp.o"

# External object files for target RegressionTree
RegressionTree_EXTERNAL_OBJECTS =

libRegressionTree.dylib: CMakeFiles/RegressionTree.dir/Node.cpp.o
libRegressionTree.dylib: CMakeFiles/RegressionTree.dir/CSVReader.cpp.o
libRegressionTree.dylib: CMakeFiles/RegressionTree.dir/main.cpp.o
libRegressionTree.dylib: CMakeFiles/RegressionTree.dir/build.make
libRegressionTree.dylib: CMakeFiles/RegressionTree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/margotgeerts/Documents/CPP-DecisionTreeRegressor/CPP-DecisionTreeRegressor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX shared library libRegressionTree.dylib"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RegressionTree.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RegressionTree.dir/build: libRegressionTree.dylib
.PHONY : CMakeFiles/RegressionTree.dir/build

CMakeFiles/RegressionTree.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/RegressionTree.dir/cmake_clean.cmake
.PHONY : CMakeFiles/RegressionTree.dir/clean

CMakeFiles/RegressionTree.dir/depend:
	cd /Users/margotgeerts/Documents/CPP-DecisionTreeRegressor/CPP-DecisionTreeRegressor/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/margotgeerts/Documents/CPP-DecisionTreeRegressor/CPP-DecisionTreeRegressor /Users/margotgeerts/Documents/CPP-DecisionTreeRegressor/CPP-DecisionTreeRegressor /Users/margotgeerts/Documents/CPP-DecisionTreeRegressor/CPP-DecisionTreeRegressor/build /Users/margotgeerts/Documents/CPP-DecisionTreeRegressor/CPP-DecisionTreeRegressor/build /Users/margotgeerts/Documents/CPP-DecisionTreeRegressor/CPP-DecisionTreeRegressor/build/CMakeFiles/RegressionTree.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/RegressionTree.dir/depend
