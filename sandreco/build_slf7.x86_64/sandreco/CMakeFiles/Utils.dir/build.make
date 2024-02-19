# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /cvmfs/larsoft.opensciencegrid.org/products/cmake/v3_27_4/Linux64bit+3.10-2.17/bin/cmake

# The command to remove a file.
RM = /cvmfs/larsoft.opensciencegrid.org/products/cmake/v3_27_4/Linux64bit+3.10-2.17/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /storage/gpfs_data/neutrino/users/disilves/sandreco/srcs

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64

# Include any dependencies generated for this target.
include sandreco/CMakeFiles/Utils.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include sandreco/CMakeFiles/Utils.dir/compiler_depend.make

# Include the progress variables for this target.
include sandreco/CMakeFiles/Utils.dir/progress.make

# Include the compile flags for this target's objects.
include sandreco/CMakeFiles/Utils.dir/flags.make

sandreco/CMakeFiles/Utils.dir/src/utils.cpp.o: sandreco/CMakeFiles/Utils.dir/flags.make
sandreco/CMakeFiles/Utils.dir/src/utils.cpp.o: /storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco/src/utils.cpp
sandreco/CMakeFiles/Utils.dir/src/utils.cpp.o: sandreco/CMakeFiles/Utils.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object sandreco/CMakeFiles/Utils.dir/src/utils.cpp.o"
	cd /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco && /cvmfs/larsoft.opensciencegrid.org/products/gcc/v9_3_0/Linux64bit+3.10-2.17/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT sandreco/CMakeFiles/Utils.dir/src/utils.cpp.o -MF CMakeFiles/Utils.dir/src/utils.cpp.o.d -o CMakeFiles/Utils.dir/src/utils.cpp.o -c /storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco/src/utils.cpp

sandreco/CMakeFiles/Utils.dir/src/utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Utils.dir/src/utils.cpp.i"
	cd /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco && /cvmfs/larsoft.opensciencegrid.org/products/gcc/v9_3_0/Linux64bit+3.10-2.17/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco/src/utils.cpp > CMakeFiles/Utils.dir/src/utils.cpp.i

sandreco/CMakeFiles/Utils.dir/src/utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Utils.dir/src/utils.cpp.s"
	cd /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco && /cvmfs/larsoft.opensciencegrid.org/products/gcc/v9_3_0/Linux64bit+3.10-2.17/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco/src/utils.cpp -o CMakeFiles/Utils.dir/src/utils.cpp.s

sandreco/CMakeFiles/Utils.dir/src/transf.cpp.o: sandreco/CMakeFiles/Utils.dir/flags.make
sandreco/CMakeFiles/Utils.dir/src/transf.cpp.o: /storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco/src/transf.cpp
sandreco/CMakeFiles/Utils.dir/src/transf.cpp.o: sandreco/CMakeFiles/Utils.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object sandreco/CMakeFiles/Utils.dir/src/transf.cpp.o"
	cd /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco && /cvmfs/larsoft.opensciencegrid.org/products/gcc/v9_3_0/Linux64bit+3.10-2.17/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT sandreco/CMakeFiles/Utils.dir/src/transf.cpp.o -MF CMakeFiles/Utils.dir/src/transf.cpp.o.d -o CMakeFiles/Utils.dir/src/transf.cpp.o -c /storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco/src/transf.cpp

sandreco/CMakeFiles/Utils.dir/src/transf.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Utils.dir/src/transf.cpp.i"
	cd /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco && /cvmfs/larsoft.opensciencegrid.org/products/gcc/v9_3_0/Linux64bit+3.10-2.17/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco/src/transf.cpp > CMakeFiles/Utils.dir/src/transf.cpp.i

sandreco/CMakeFiles/Utils.dir/src/transf.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Utils.dir/src/transf.cpp.s"
	cd /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco && /cvmfs/larsoft.opensciencegrid.org/products/gcc/v9_3_0/Linux64bit+3.10-2.17/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco/src/transf.cpp -o CMakeFiles/Utils.dir/src/transf.cpp.s

# Object files for target Utils
Utils_OBJECTS = \
"CMakeFiles/Utils.dir/src/utils.cpp.o" \
"CMakeFiles/Utils.dir/src/transf.cpp.o"

# External object files for target Utils
Utils_EXTERNAL_OBJECTS =

lib/libUtils.so: sandreco/CMakeFiles/Utils.dir/src/utils.cpp.o
lib/libUtils.so: sandreco/CMakeFiles/Utils.dir/src/transf.cpp.o
lib/libUtils.so: sandreco/CMakeFiles/Utils.dir/build.make
lib/libUtils.so: lib/libSANDGeoManager.so
lib/libUtils.so: /cvmfs/dune.opensciencegrid.org/products/dune/edepsim/v3_2_0b/Linux64bit+3.10-2.17-e20-prof/lib/libedepsim_io.so
lib/libUtils.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libCore.so
lib/libUtils.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libImt.so
lib/libUtils.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libRIO.so
lib/libUtils.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libNet.so
lib/libUtils.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libHist.so
lib/libUtils.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libGraf.so
lib/libUtils.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libGraf3d.so
lib/libUtils.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libGpad.so
lib/libUtils.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libROOTDataFrame.so
lib/libUtils.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libTree.so
lib/libUtils.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libTreePlayer.so
lib/libUtils.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libRint.so
lib/libUtils.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libPostscript.so
lib/libUtils.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libMatrix.so
lib/libUtils.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libPhysics.so
lib/libUtils.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libMathCore.so
lib/libUtils.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libThread.so
lib/libUtils.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libMultiProc.so
lib/libUtils.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libROOTVecOps.so
lib/libUtils.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libGeom.so
lib/libUtils.so: sandreco/CMakeFiles/Utils.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library ../lib/libUtils.so"
	cd /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Utils.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
sandreco/CMakeFiles/Utils.dir/build: lib/libUtils.so
.PHONY : sandreco/CMakeFiles/Utils.dir/build

sandreco/CMakeFiles/Utils.dir/clean:
	cd /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco && $(CMAKE_COMMAND) -P CMakeFiles/Utils.dir/cmake_clean.cmake
.PHONY : sandreco/CMakeFiles/Utils.dir/clean

sandreco/CMakeFiles/Utils.dir/depend:
	cd /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /storage/gpfs_data/neutrino/users/disilves/sandreco/srcs /storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64 /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco/CMakeFiles/Utils.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : sandreco/CMakeFiles/Utils.dir/depend

