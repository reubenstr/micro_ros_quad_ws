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
CMAKE_SOURCE_DIR = /home/devpc/Desktop/microros_ws/src/uros/rmw_microxrcedds/rmw_microxrcedds_c

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/devpc/Desktop/microros_ws/build/rmw_microxrcedds

# Include any dependencies generated for this target.
include test/CMakeFiles/test-service.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/test-service.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/test-service.dir/flags.make

test/CMakeFiles/test-service.dir/test_service.cpp.o: test/CMakeFiles/test-service.dir/flags.make
test/CMakeFiles/test-service.dir/test_service.cpp.o: /home/devpc/Desktop/microros_ws/src/uros/rmw_microxrcedds/rmw_microxrcedds_c/test/test_service.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/devpc/Desktop/microros_ws/build/rmw_microxrcedds/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/test-service.dir/test_service.cpp.o"
	cd /home/devpc/Desktop/microros_ws/build/rmw_microxrcedds/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test-service.dir/test_service.cpp.o -c /home/devpc/Desktop/microros_ws/src/uros/rmw_microxrcedds/rmw_microxrcedds_c/test/test_service.cpp

test/CMakeFiles/test-service.dir/test_service.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test-service.dir/test_service.cpp.i"
	cd /home/devpc/Desktop/microros_ws/build/rmw_microxrcedds/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/devpc/Desktop/microros_ws/src/uros/rmw_microxrcedds/rmw_microxrcedds_c/test/test_service.cpp > CMakeFiles/test-service.dir/test_service.cpp.i

test/CMakeFiles/test-service.dir/test_service.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test-service.dir/test_service.cpp.s"
	cd /home/devpc/Desktop/microros_ws/build/rmw_microxrcedds/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/devpc/Desktop/microros_ws/src/uros/rmw_microxrcedds/rmw_microxrcedds_c/test/test_service.cpp -o CMakeFiles/test-service.dir/test_service.cpp.s

test/CMakeFiles/test-service.dir/test_utils.cpp.o: test/CMakeFiles/test-service.dir/flags.make
test/CMakeFiles/test-service.dir/test_utils.cpp.o: /home/devpc/Desktop/microros_ws/src/uros/rmw_microxrcedds/rmw_microxrcedds_c/test/test_utils.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/devpc/Desktop/microros_ws/build/rmw_microxrcedds/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object test/CMakeFiles/test-service.dir/test_utils.cpp.o"
	cd /home/devpc/Desktop/microros_ws/build/rmw_microxrcedds/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test-service.dir/test_utils.cpp.o -c /home/devpc/Desktop/microros_ws/src/uros/rmw_microxrcedds/rmw_microxrcedds_c/test/test_utils.cpp

test/CMakeFiles/test-service.dir/test_utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test-service.dir/test_utils.cpp.i"
	cd /home/devpc/Desktop/microros_ws/build/rmw_microxrcedds/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/devpc/Desktop/microros_ws/src/uros/rmw_microxrcedds/rmw_microxrcedds_c/test/test_utils.cpp > CMakeFiles/test-service.dir/test_utils.cpp.i

test/CMakeFiles/test-service.dir/test_utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test-service.dir/test_utils.cpp.s"
	cd /home/devpc/Desktop/microros_ws/build/rmw_microxrcedds/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/devpc/Desktop/microros_ws/src/uros/rmw_microxrcedds/rmw_microxrcedds_c/test/test_utils.cpp -o CMakeFiles/test-service.dir/test_utils.cpp.s

# Object files for target test-service
test__service_OBJECTS = \
"CMakeFiles/test-service.dir/test_service.cpp.o" \
"CMakeFiles/test-service.dir/test_utils.cpp.o"

# External object files for target test-service
test__service_EXTERNAL_OBJECTS =

test/test-service: test/CMakeFiles/test-service.dir/test_service.cpp.o
test/test-service: test/CMakeFiles/test-service.dir/test_utils.cpp.o
test/test-service: test/CMakeFiles/test-service.dir/build.make
test/test-service: gtest/libgtest_main.a
test/test-service: gtest/libgtest.a
test/test-service: librmw_microxrcedds.so
test/test-service: /opt/ros/foxy/lib/librmw.so
test/test-service: /home/devpc/Desktop/microros_ws/install/microxrcedds_client/lib/libmicroxrcedds_client.so.2.0.0
test/test-service: /home/devpc/Desktop/microros_ws/install/microcdr/lib/libmicrocdr.so.1.2.2
test/test-service: /home/devpc/Desktop/microros_ws/install/rosidl_typesupport_microxrcedds_c/lib/librosidl_typesupport_microxrcedds_c.so
test/test-service: /opt/ros/foxy/lib/librosidl_runtime_c.so
test/test-service: /opt/ros/foxy/lib/librcutils.so
test/test-service: test/CMakeFiles/test-service.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/devpc/Desktop/microros_ws/build/rmw_microxrcedds/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable test-service"
	cd /home/devpc/Desktop/microros_ws/build/rmw_microxrcedds/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test-service.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/test-service.dir/build: test/test-service

.PHONY : test/CMakeFiles/test-service.dir/build

test/CMakeFiles/test-service.dir/clean:
	cd /home/devpc/Desktop/microros_ws/build/rmw_microxrcedds/test && $(CMAKE_COMMAND) -P CMakeFiles/test-service.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/test-service.dir/clean

test/CMakeFiles/test-service.dir/depend:
	cd /home/devpc/Desktop/microros_ws/build/rmw_microxrcedds && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/devpc/Desktop/microros_ws/src/uros/rmw_microxrcedds/rmw_microxrcedds_c /home/devpc/Desktop/microros_ws/src/uros/rmw_microxrcedds/rmw_microxrcedds_c/test /home/devpc/Desktop/microros_ws/build/rmw_microxrcedds /home/devpc/Desktop/microros_ws/build/rmw_microxrcedds/test /home/devpc/Desktop/microros_ws/build/rmw_microxrcedds/test/CMakeFiles/test-service.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/test-service.dir/depend

