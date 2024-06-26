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
include sandreco/CMakeFiles/SANDEventDisplay.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include sandreco/CMakeFiles/SANDEventDisplay.dir/compiler_depend.make

# Include the progress variables for this target.
include sandreco/CMakeFiles/SANDEventDisplay.dir/progress.make

# Include the compile flags for this target's objects.
include sandreco/CMakeFiles/SANDEventDisplay.dir/flags.make

sandreco/SANDEventDisplayDict.cxx: /storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco/include/SANDEventDisplayLinkDef.h
sandreco/SANDEventDisplayDict.cxx: /storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco/include/SANDEventDisplay.h
sandreco/SANDEventDisplayDict.cxx: /storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco/include/SANDEventDisplay.h
sandreco/SANDEventDisplayDict.cxx: /storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco/include/SANDEventDisplayLinkDef.h
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating SANDEventDisplayDict.cxx, ../lib/libSANDEventDisplayDict_rdict.pcm, ../lib/libSANDEventDisplayDict.rootmap"
	cd /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco && /cvmfs/larsoft.opensciencegrid.org/products/cmake/v3_27_4/Linux64bit+3.10-2.17/bin/cmake -E env LD_LIBRARY_PATH=/cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib:/storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco/slf7.x86_64.e20.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/gmp/v6_2_1/Linux64bit+3.10-2.17/lib:/cvmfs/larsoft.opensciencegrid.org/products/xrootd/v5_4_3b/Linux64bit+3.10-2.17-e20-p3913-prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/tbb/v2021_7_0/Linux64bit+3.10-2.17-e20/lib:/cvmfs/larsoft.opensciencegrid.org/products/pythia/v6_4_28w/Linux64bit+3.10-2.17-gcc930-prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/postgresql/v14_5/Linux64bit+3.10-2.17-p3913/lib:/cvmfs/larsoft.opensciencegrid.org/products/openblas/v0_3_21/Linux64bit+3.10-2.17-e20/lib:/cvmfs/larsoft.opensciencegrid.org/products/python/v3_9_13/Linux64bit+3.10-2.17/lib:/cvmfs/larsoft.opensciencegrid.org/products/sqlite/v3_39_02_00/Linux64bit+3.10-2.17/lib:/cvmfs/larsoft.opensciencegrid.org/products/libxml2/v2_9_12/Linux64bit+3.10-2.17/lib:/cvmfs/larsoft.opensciencegrid.org/products/gsl/v2_7/Linux64bit+3.10-2.17/lib:/cvmfs/larsoft.opensciencegrid.org/products/fftw/v3_3_10/Linux64bit+3.10-2.17/lib:/cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/geant4/v4_10_6_p01f/Linux64bit+3.10-2.17-e20-prof/lib64:/cvmfs/larsoft.opensciencegrid.org/products/xerces_c/v3_2_3c/Linux64bit+3.10-2.17-e20/lib:/cvmfs/larsoft.opensciencegrid.org/products/clhep/v2_4_5_3a/Linux64bit+3.10-2.17-e20-prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/gcc/v9_3_0/Linux64bit+3.10-2.17/lib64:/cvmfs/larsoft.opensciencegrid.org/products/gcc/v9_3_0/Linux64bit+3.10-2.17/lib:/cvmfs/dune.opensciencegrid.org/products/dune/./edepsim/v3_2_0b/Linux64bit+3.10-2.17-e20-prof/lib:/opt/exp_software/neutrino/CODE/dependencies/usr/lib64:/opt/exp_software/neutrino/G4LBNE/v3r5p7/source/build:/opt/exp_software/neutrino/DK2NU/v01_08_00/lib:/opt/exp_software/neutrino/EDEPSIM/lib:/usr/lib64:/opt/exp_software/neutrino/LHAPDF6/usr/lib64:/opt/exp_software/neutrino/GENIE/v3.0.6/lib:/opt/exp_software/neutrino/GEANT4/4.10.05/lib64:/opt/exp_software/neutrino/ROOT/v6.20.00_py3/lib:/opt/exp_software/neutrino/PYTHIA6/Pythia6Support/v6_424/lib:.:/usr/lib64:/opt/exp_software/neutrino/ROOUNFOLD/RooUnfold/build /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/bin/rootcling -v2 -f SANDEventDisplayDict.cxx -s /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/lib/libSANDEventDisplayDict.so -rml libSANDEventDisplayDict.so -rmf /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/lib/libSANDEventDisplayDict.rootmap -compilerI/cvmfs/larsoft.opensciencegrid.org/products/tbb/v2021_7_0/Linux64bit+3.10-2.17-e20/include -compilerI/cvmfs/larsoft.opensciencegrid.org/products/gcc/v9_3_0/Linux64bit+3.10-2.17/include/c++/9.3.0 -compilerI/cvmfs/larsoft.opensciencegrid.org/products/gcc/v9_3_0/Linux64bit+3.10-2.17/include/c++/9.3.0/x86_64-pc-linux-gnu -compilerI/cvmfs/larsoft.opensciencegrid.org/products/gcc/v9_3_0/Linux64bit+3.10-2.17/include/c++/9.3.0/backward -compilerI/cvmfs/larsoft.opensciencegrid.org/products/gcc/v9_3_0/Linux64bit+3.10-2.17/lib/gcc/x86_64-pc-linux-gnu/9.3.0/include -compilerI/cvmfs/larsoft.opensciencegrid.org/products/gcc/v9_3_0/Linux64bit+3.10-2.17/lib/gcc/x86_64-pc-linux-gnu/9.3.0/include-fixed -compilerI/usr/local/include -compilerI/cvmfs/larsoft.opensciencegrid.org/products/gcc/v9_3_0/Linux64bit+3.10-2.17/include -compilerI/usr/include -I/storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco -I/storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco -I/cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/include -I/cvmfs/larsoft.opensciencegrid.org/products/clhep/v2_4_5_3a/Linux64bit+3.10-2.17-e20-prof/include -I/cvmfs/larsoft.opensciencegrid.org/products/geant4/v4_10_6_p01f/Linux64bit+3.10-2.17-e20-prof/include/Geant4 -I/storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco/include SANDEventDisplay.h /storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco/include/SANDEventDisplayLinkDef.h

lib/libSANDEventDisplayDict_rdict.pcm: sandreco/SANDEventDisplayDict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libSANDEventDisplayDict_rdict.pcm

lib/libSANDEventDisplayDict.rootmap: sandreco/SANDEventDisplayDict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libSANDEventDisplayDict.rootmap

sandreco/CMakeFiles/SANDEventDisplay.dir/src/SANDEventDisplay.cpp.o: sandreco/CMakeFiles/SANDEventDisplay.dir/flags.make
sandreco/CMakeFiles/SANDEventDisplay.dir/src/SANDEventDisplay.cpp.o: /storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco/src/SANDEventDisplay.cpp
sandreco/CMakeFiles/SANDEventDisplay.dir/src/SANDEventDisplay.cpp.o: sandreco/CMakeFiles/SANDEventDisplay.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object sandreco/CMakeFiles/SANDEventDisplay.dir/src/SANDEventDisplay.cpp.o"
	cd /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco && /cvmfs/larsoft.opensciencegrid.org/products/gcc/v9_3_0/Linux64bit+3.10-2.17/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT sandreco/CMakeFiles/SANDEventDisplay.dir/src/SANDEventDisplay.cpp.o -MF CMakeFiles/SANDEventDisplay.dir/src/SANDEventDisplay.cpp.o.d -o CMakeFiles/SANDEventDisplay.dir/src/SANDEventDisplay.cpp.o -c /storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco/src/SANDEventDisplay.cpp

sandreco/CMakeFiles/SANDEventDisplay.dir/src/SANDEventDisplay.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/SANDEventDisplay.dir/src/SANDEventDisplay.cpp.i"
	cd /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco && /cvmfs/larsoft.opensciencegrid.org/products/gcc/v9_3_0/Linux64bit+3.10-2.17/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco/src/SANDEventDisplay.cpp > CMakeFiles/SANDEventDisplay.dir/src/SANDEventDisplay.cpp.i

sandreco/CMakeFiles/SANDEventDisplay.dir/src/SANDEventDisplay.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/SANDEventDisplay.dir/src/SANDEventDisplay.cpp.s"
	cd /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco && /cvmfs/larsoft.opensciencegrid.org/products/gcc/v9_3_0/Linux64bit+3.10-2.17/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco/src/SANDEventDisplay.cpp -o CMakeFiles/SANDEventDisplay.dir/src/SANDEventDisplay.cpp.s

sandreco/CMakeFiles/SANDEventDisplay.dir/src/SANDDisplayUtils.cpp.o: sandreco/CMakeFiles/SANDEventDisplay.dir/flags.make
sandreco/CMakeFiles/SANDEventDisplay.dir/src/SANDDisplayUtils.cpp.o: /storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco/src/SANDDisplayUtils.cpp
sandreco/CMakeFiles/SANDEventDisplay.dir/src/SANDDisplayUtils.cpp.o: sandreco/CMakeFiles/SANDEventDisplay.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object sandreco/CMakeFiles/SANDEventDisplay.dir/src/SANDDisplayUtils.cpp.o"
	cd /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco && /cvmfs/larsoft.opensciencegrid.org/products/gcc/v9_3_0/Linux64bit+3.10-2.17/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT sandreco/CMakeFiles/SANDEventDisplay.dir/src/SANDDisplayUtils.cpp.o -MF CMakeFiles/SANDEventDisplay.dir/src/SANDDisplayUtils.cpp.o.d -o CMakeFiles/SANDEventDisplay.dir/src/SANDDisplayUtils.cpp.o -c /storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco/src/SANDDisplayUtils.cpp

sandreco/CMakeFiles/SANDEventDisplay.dir/src/SANDDisplayUtils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/SANDEventDisplay.dir/src/SANDDisplayUtils.cpp.i"
	cd /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco && /cvmfs/larsoft.opensciencegrid.org/products/gcc/v9_3_0/Linux64bit+3.10-2.17/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco/src/SANDDisplayUtils.cpp > CMakeFiles/SANDEventDisplay.dir/src/SANDDisplayUtils.cpp.i

sandreco/CMakeFiles/SANDEventDisplay.dir/src/SANDDisplayUtils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/SANDEventDisplay.dir/src/SANDDisplayUtils.cpp.s"
	cd /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco && /cvmfs/larsoft.opensciencegrid.org/products/gcc/v9_3_0/Linux64bit+3.10-2.17/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco/src/SANDDisplayUtils.cpp -o CMakeFiles/SANDEventDisplay.dir/src/SANDDisplayUtils.cpp.s

sandreco/CMakeFiles/SANDEventDisplay.dir/SANDEventDisplayDict.cxx.o: sandreco/CMakeFiles/SANDEventDisplay.dir/flags.make
sandreco/CMakeFiles/SANDEventDisplay.dir/SANDEventDisplayDict.cxx.o: sandreco/SANDEventDisplayDict.cxx
sandreco/CMakeFiles/SANDEventDisplay.dir/SANDEventDisplayDict.cxx.o: sandreco/CMakeFiles/SANDEventDisplay.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object sandreco/CMakeFiles/SANDEventDisplay.dir/SANDEventDisplayDict.cxx.o"
	cd /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco && /cvmfs/larsoft.opensciencegrid.org/products/gcc/v9_3_0/Linux64bit+3.10-2.17/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT sandreco/CMakeFiles/SANDEventDisplay.dir/SANDEventDisplayDict.cxx.o -MF CMakeFiles/SANDEventDisplay.dir/SANDEventDisplayDict.cxx.o.d -o CMakeFiles/SANDEventDisplay.dir/SANDEventDisplayDict.cxx.o -c /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco/SANDEventDisplayDict.cxx

sandreco/CMakeFiles/SANDEventDisplay.dir/SANDEventDisplayDict.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/SANDEventDisplay.dir/SANDEventDisplayDict.cxx.i"
	cd /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco && /cvmfs/larsoft.opensciencegrid.org/products/gcc/v9_3_0/Linux64bit+3.10-2.17/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco/SANDEventDisplayDict.cxx > CMakeFiles/SANDEventDisplay.dir/SANDEventDisplayDict.cxx.i

sandreco/CMakeFiles/SANDEventDisplay.dir/SANDEventDisplayDict.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/SANDEventDisplay.dir/SANDEventDisplayDict.cxx.s"
	cd /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco && /cvmfs/larsoft.opensciencegrid.org/products/gcc/v9_3_0/Linux64bit+3.10-2.17/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco/SANDEventDisplayDict.cxx -o CMakeFiles/SANDEventDisplay.dir/SANDEventDisplayDict.cxx.s

# Object files for target SANDEventDisplay
SANDEventDisplay_OBJECTS = \
"CMakeFiles/SANDEventDisplay.dir/src/SANDEventDisplay.cpp.o" \
"CMakeFiles/SANDEventDisplay.dir/src/SANDDisplayUtils.cpp.o" \
"CMakeFiles/SANDEventDisplay.dir/SANDEventDisplayDict.cxx.o"

# External object files for target SANDEventDisplay
SANDEventDisplay_EXTERNAL_OBJECTS =

lib/libSANDEventDisplay.so: sandreco/CMakeFiles/SANDEventDisplay.dir/src/SANDEventDisplay.cpp.o
lib/libSANDEventDisplay.so: sandreco/CMakeFiles/SANDEventDisplay.dir/src/SANDDisplayUtils.cpp.o
lib/libSANDEventDisplay.so: sandreco/CMakeFiles/SANDEventDisplay.dir/SANDEventDisplayDict.cxx.o
lib/libSANDEventDisplay.so: sandreco/CMakeFiles/SANDEventDisplay.dir/build.make
lib/libSANDEventDisplay.so: lib/libUtils.so
lib/libSANDEventDisplay.so: lib/libSANDGeoManager.so
lib/libSANDEventDisplay.so: /cvmfs/dune.opensciencegrid.org/products/dune/edepsim/v3_2_0b/Linux64bit+3.10-2.17-e20-prof/lib/libedepsim_io.so
lib/libSANDEventDisplay.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libCore.so
lib/libSANDEventDisplay.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libImt.so
lib/libSANDEventDisplay.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libRIO.so
lib/libSANDEventDisplay.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libNet.so
lib/libSANDEventDisplay.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libHist.so
lib/libSANDEventDisplay.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libGraf.so
lib/libSANDEventDisplay.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libGraf3d.so
lib/libSANDEventDisplay.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libGpad.so
lib/libSANDEventDisplay.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libROOTDataFrame.so
lib/libSANDEventDisplay.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libTree.so
lib/libSANDEventDisplay.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libTreePlayer.so
lib/libSANDEventDisplay.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libRint.so
lib/libSANDEventDisplay.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libPostscript.so
lib/libSANDEventDisplay.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libMatrix.so
lib/libSANDEventDisplay.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libPhysics.so
lib/libSANDEventDisplay.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libMathCore.so
lib/libSANDEventDisplay.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libThread.so
lib/libSANDEventDisplay.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libMultiProc.so
lib/libSANDEventDisplay.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libROOTVecOps.so
lib/libSANDEventDisplay.so: /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib/libGeom.so
lib/libSANDEventDisplay.so: sandreco/CMakeFiles/SANDEventDisplay.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX shared library ../lib/libSANDEventDisplay.so"
	cd /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SANDEventDisplay.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
sandreco/CMakeFiles/SANDEventDisplay.dir/build: lib/libSANDEventDisplay.so
.PHONY : sandreco/CMakeFiles/SANDEventDisplay.dir/build

sandreco/CMakeFiles/SANDEventDisplay.dir/clean:
	cd /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco && $(CMAKE_COMMAND) -P CMakeFiles/SANDEventDisplay.dir/cmake_clean.cmake
.PHONY : sandreco/CMakeFiles/SANDEventDisplay.dir/clean

sandreco/CMakeFiles/SANDEventDisplay.dir/depend: lib/libSANDEventDisplayDict.rootmap
sandreco/CMakeFiles/SANDEventDisplay.dir/depend: lib/libSANDEventDisplayDict_rdict.pcm
sandreco/CMakeFiles/SANDEventDisplay.dir/depend: sandreco/SANDEventDisplayDict.cxx
	cd /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /storage/gpfs_data/neutrino/users/disilves/sandreco/srcs /storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64 /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco/CMakeFiles/SANDEventDisplay.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : sandreco/CMakeFiles/SANDEventDisplay.dir/depend

