# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/loay/eclipse-workspace/Beginner/CPP_Fundamentals_Including_CPP17/modern_memory_store

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/loay/eclipse-workspace/Beginner/CPP_Fundamentals_Including_CPP17/modern_memory_store/build

# Include any dependencies generated for this target.
include CMakeFiles/oldlocation.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/oldlocation.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/oldlocation.dir/flags.make

CMakeFiles/oldlocation.dir/splike/lib_location/Location.cpp.o: CMakeFiles/oldlocation.dir/flags.make
CMakeFiles/oldlocation.dir/splike/lib_location/Location.cpp.o: ../splike/lib_location/Location.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/loay/eclipse-workspace/Beginner/CPP_Fundamentals_Including_CPP17/modern_memory_store/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/oldlocation.dir/splike/lib_location/Location.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/oldlocation.dir/splike/lib_location/Location.cpp.o -c /home/loay/eclipse-workspace/Beginner/CPP_Fundamentals_Including_CPP17/modern_memory_store/splike/lib_location/Location.cpp

CMakeFiles/oldlocation.dir/splike/lib_location/Location.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/oldlocation.dir/splike/lib_location/Location.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/loay/eclipse-workspace/Beginner/CPP_Fundamentals_Including_CPP17/modern_memory_store/splike/lib_location/Location.cpp > CMakeFiles/oldlocation.dir/splike/lib_location/Location.cpp.i

CMakeFiles/oldlocation.dir/splike/lib_location/Location.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/oldlocation.dir/splike/lib_location/Location.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/loay/eclipse-workspace/Beginner/CPP_Fundamentals_Including_CPP17/modern_memory_store/splike/lib_location/Location.cpp -o CMakeFiles/oldlocation.dir/splike/lib_location/Location.cpp.s

# Object files for target oldlocation
oldlocation_OBJECTS = \
"CMakeFiles/oldlocation.dir/splike/lib_location/Location.cpp.o"

# External object files for target oldlocation
oldlocation_EXTERNAL_OBJECTS =

/home/loay/eclipse-workspace/Beginner/CPP_Fundamentals_Including_CPP17/modern_memory_store/lib/oldlocation.so: CMakeFiles/oldlocation.dir/splike/lib_location/Location.cpp.o
/home/loay/eclipse-workspace/Beginner/CPP_Fundamentals_Including_CPP17/modern_memory_store/lib/oldlocation.so: CMakeFiles/oldlocation.dir/build.make
/home/loay/eclipse-workspace/Beginner/CPP_Fundamentals_Including_CPP17/modern_memory_store/lib/oldlocation.so: CMakeFiles/oldlocation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/loay/eclipse-workspace/Beginner/CPP_Fundamentals_Including_CPP17/modern_memory_store/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library /home/loay/eclipse-workspace/Beginner/CPP_Fundamentals_Including_CPP17/modern_memory_store/lib/oldlocation.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/oldlocation.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/oldlocation.dir/build: /home/loay/eclipse-workspace/Beginner/CPP_Fundamentals_Including_CPP17/modern_memory_store/lib/oldlocation.so

.PHONY : CMakeFiles/oldlocation.dir/build

CMakeFiles/oldlocation.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/oldlocation.dir/cmake_clean.cmake
.PHONY : CMakeFiles/oldlocation.dir/clean

CMakeFiles/oldlocation.dir/depend:
	cd /home/loay/eclipse-workspace/Beginner/CPP_Fundamentals_Including_CPP17/modern_memory_store/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/loay/eclipse-workspace/Beginner/CPP_Fundamentals_Including_CPP17/modern_memory_store /home/loay/eclipse-workspace/Beginner/CPP_Fundamentals_Including_CPP17/modern_memory_store /home/loay/eclipse-workspace/Beginner/CPP_Fundamentals_Including_CPP17/modern_memory_store/build /home/loay/eclipse-workspace/Beginner/CPP_Fundamentals_Including_CPP17/modern_memory_store/build /home/loay/eclipse-workspace/Beginner/CPP_Fundamentals_Including_CPP17/modern_memory_store/build/CMakeFiles/oldlocation.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/oldlocation.dir/depend

