# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /home/chris/clion-2017.2.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/chris/clion-2017.2.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/chris/AlgoTrader

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/chris/AlgoTrader/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TestAlgo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TestAlgo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TestAlgo.dir/flags.make

CMakeFiles/TestAlgo.dir/test/finance/TestWallet.cpp.o: CMakeFiles/TestAlgo.dir/flags.make
CMakeFiles/TestAlgo.dir/test/finance/TestWallet.cpp.o: ../test/finance/TestWallet.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chris/AlgoTrader/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TestAlgo.dir/test/finance/TestWallet.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TestAlgo.dir/test/finance/TestWallet.cpp.o -c /home/chris/AlgoTrader/test/finance/TestWallet.cpp

CMakeFiles/TestAlgo.dir/test/finance/TestWallet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TestAlgo.dir/test/finance/TestWallet.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chris/AlgoTrader/test/finance/TestWallet.cpp > CMakeFiles/TestAlgo.dir/test/finance/TestWallet.cpp.i

CMakeFiles/TestAlgo.dir/test/finance/TestWallet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TestAlgo.dir/test/finance/TestWallet.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chris/AlgoTrader/test/finance/TestWallet.cpp -o CMakeFiles/TestAlgo.dir/test/finance/TestWallet.cpp.s

CMakeFiles/TestAlgo.dir/test/finance/TestWallet.cpp.o.requires:

.PHONY : CMakeFiles/TestAlgo.dir/test/finance/TestWallet.cpp.o.requires

CMakeFiles/TestAlgo.dir/test/finance/TestWallet.cpp.o.provides: CMakeFiles/TestAlgo.dir/test/finance/TestWallet.cpp.o.requires
	$(MAKE) -f CMakeFiles/TestAlgo.dir/build.make CMakeFiles/TestAlgo.dir/test/finance/TestWallet.cpp.o.provides.build
.PHONY : CMakeFiles/TestAlgo.dir/test/finance/TestWallet.cpp.o.provides

CMakeFiles/TestAlgo.dir/test/finance/TestWallet.cpp.o.provides.build: CMakeFiles/TestAlgo.dir/test/finance/TestWallet.cpp.o


# Object files for target TestAlgo
TestAlgo_OBJECTS = \
"CMakeFiles/TestAlgo.dir/test/finance/TestWallet.cpp.o"

# External object files for target TestAlgo
TestAlgo_EXTERNAL_OBJECTS =

TestAlgo: CMakeFiles/TestAlgo.dir/test/finance/TestWallet.cpp.o
TestAlgo: CMakeFiles/TestAlgo.dir/build.make
TestAlgo: src/finance/libfinanced.a
TestAlgo: googletest/googlemock/gtest/libgtestd.a
TestAlgo: googletest/googlemock/gtest/libgtest_maind.a
TestAlgo: googletest/googlemock/gtest/libgtestd.a
TestAlgo: CMakeFiles/TestAlgo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/chris/AlgoTrader/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TestAlgo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TestAlgo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TestAlgo.dir/build: TestAlgo

.PHONY : CMakeFiles/TestAlgo.dir/build

CMakeFiles/TestAlgo.dir/requires: CMakeFiles/TestAlgo.dir/test/finance/TestWallet.cpp.o.requires

.PHONY : CMakeFiles/TestAlgo.dir/requires

CMakeFiles/TestAlgo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TestAlgo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TestAlgo.dir/clean

CMakeFiles/TestAlgo.dir/depend:
	cd /home/chris/AlgoTrader/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chris/AlgoTrader /home/chris/AlgoTrader /home/chris/AlgoTrader/cmake-build-debug /home/chris/AlgoTrader/cmake-build-debug /home/chris/AlgoTrader/cmake-build-debug/CMakeFiles/TestAlgo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TestAlgo.dir/depend
