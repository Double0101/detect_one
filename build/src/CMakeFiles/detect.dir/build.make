# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.10.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.10.1/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/Double/Documents/workspace/Machine Learning/tutorial/detect_one"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/Double/Documents/workspace/Machine Learning/tutorial/detect_one/build"

# Include any dependencies generated for this target.
include src/CMakeFiles/detect.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/detect.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/detect.dir/flags.make

src/CMakeFiles/detect.dir/objectDetection.cpp.o: src/CMakeFiles/detect.dir/flags.make
src/CMakeFiles/detect.dir/objectDetection.cpp.o: ../src/objectDetection.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/Double/Documents/workspace/Machine Learning/tutorial/detect_one/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/detect.dir/objectDetection.cpp.o"
	cd "/Users/Double/Documents/workspace/Machine Learning/tutorial/detect_one/build/src" && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/detect.dir/objectDetection.cpp.o -c "/Users/Double/Documents/workspace/Machine Learning/tutorial/detect_one/src/objectDetection.cpp"

src/CMakeFiles/detect.dir/objectDetection.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/detect.dir/objectDetection.cpp.i"
	cd "/Users/Double/Documents/workspace/Machine Learning/tutorial/detect_one/build/src" && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/Double/Documents/workspace/Machine Learning/tutorial/detect_one/src/objectDetection.cpp" > CMakeFiles/detect.dir/objectDetection.cpp.i

src/CMakeFiles/detect.dir/objectDetection.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/detect.dir/objectDetection.cpp.s"
	cd "/Users/Double/Documents/workspace/Machine Learning/tutorial/detect_one/build/src" && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/Double/Documents/workspace/Machine Learning/tutorial/detect_one/src/objectDetection.cpp" -o CMakeFiles/detect.dir/objectDetection.cpp.s

src/CMakeFiles/detect.dir/objectDetection.cpp.o.requires:

.PHONY : src/CMakeFiles/detect.dir/objectDetection.cpp.o.requires

src/CMakeFiles/detect.dir/objectDetection.cpp.o.provides: src/CMakeFiles/detect.dir/objectDetection.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/detect.dir/build.make src/CMakeFiles/detect.dir/objectDetection.cpp.o.provides.build
.PHONY : src/CMakeFiles/detect.dir/objectDetection.cpp.o.provides

src/CMakeFiles/detect.dir/objectDetection.cpp.o.provides.build: src/CMakeFiles/detect.dir/objectDetection.cpp.o


# Object files for target detect
detect_OBJECTS = \
"CMakeFiles/detect.dir/objectDetection.cpp.o"

# External object files for target detect
detect_EXTERNAL_OBJECTS =

bin/detect: src/CMakeFiles/detect.dir/objectDetection.cpp.o
bin/detect: src/CMakeFiles/detect.dir/build.make
bin/detect: /usr/local/lib/libopencv_stitching.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_superres.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_videostab.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_aruco.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_bgsegm.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_bioinspired.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_ccalib.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_dpm.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_face.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_fuzzy.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_img_hash.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_line_descriptor.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_optflow.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_reg.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_rgbd.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_saliency.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_stereo.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_structured_light.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_surface_matching.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_tracking.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_xfeatures2d.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_ximgproc.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_xobjdetect.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_xphoto.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_shape.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_photo.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_calib3d.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_phase_unwrapping.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_video.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_datasets.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_plot.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_text.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_dnn.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_features2d.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_flann.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_highgui.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_ml.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_videoio.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_imgcodecs.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_objdetect.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_imgproc.3.3.1.dylib
bin/detect: /usr/local/lib/libopencv_core.3.3.1.dylib
bin/detect: src/CMakeFiles/detect.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/Double/Documents/workspace/Machine Learning/tutorial/detect_one/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/detect"
	cd "/Users/Double/Documents/workspace/Machine Learning/tutorial/detect_one/build/src" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/detect.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/detect.dir/build: bin/detect

.PHONY : src/CMakeFiles/detect.dir/build

src/CMakeFiles/detect.dir/requires: src/CMakeFiles/detect.dir/objectDetection.cpp.o.requires

.PHONY : src/CMakeFiles/detect.dir/requires

src/CMakeFiles/detect.dir/clean:
	cd "/Users/Double/Documents/workspace/Machine Learning/tutorial/detect_one/build/src" && $(CMAKE_COMMAND) -P CMakeFiles/detect.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/detect.dir/clean

src/CMakeFiles/detect.dir/depend:
	cd "/Users/Double/Documents/workspace/Machine Learning/tutorial/detect_one/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/Double/Documents/workspace/Machine Learning/tutorial/detect_one" "/Users/Double/Documents/workspace/Machine Learning/tutorial/detect_one/src" "/Users/Double/Documents/workspace/Machine Learning/tutorial/detect_one/build" "/Users/Double/Documents/workspace/Machine Learning/tutorial/detect_one/build/src" "/Users/Double/Documents/workspace/Machine Learning/tutorial/detect_one/build/src/CMakeFiles/detect.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : src/CMakeFiles/detect.dir/depend

