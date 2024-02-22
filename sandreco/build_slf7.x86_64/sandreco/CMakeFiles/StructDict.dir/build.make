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
include sandreco/CMakeFiles/StructDict.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include sandreco/CMakeFiles/StructDict.dir/compiler_depend.make

# Include the progress variables for this target.
include sandreco/CMakeFiles/StructDict.dir/progress.make

# Include the compile flags for this target's objects.
include sandreco/CMakeFiles/StructDict.dir/flags.make

sandreco/StructDict.cxx: /storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco/include/StructLinkDef.h
sandreco/StructDict.cxx: /storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco/include/struct.h
sandreco/StructDict.cxx: /storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco/include/struct.h
sandreco/StructDict.cxx: /storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco/include/StructLinkDef.h
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating StructDict.cxx, ../lib/libStruct_rdict.pcm, ../lib/libStruct.rootmap"
	cd /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco && /cvmfs/larsoft.opensciencegrid.org/products/cmake/v3_27_4/Linux64bit+3.10-2.17/bin/cmake -E env LD_LIBRARY_PATH=/cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib:/storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco/slf7.x86_64.e20.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/xrootd/v5_4_3b/Linux64bit+3.10-2.17-e20-p3913-prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/tbb/v2021_7_0/Linux64bit+3.10-2.17-e20/lib:/cvmfs/larsoft.opensciencegrid.org/products/pythia/v6_4_28w/Linux64bit+3.10-2.17-gcc930-prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/postgresql/v14_5/Linux64bit+3.10-2.17-p3913/lib:/cvmfs/larsoft.opensciencegrid.org/products/openblas/v0_3_21/Linux64bit+3.10-2.17-e20/lib:/cvmfs/larsoft.opensciencegrid.org/products/python/v3_9_13/Linux64bit+3.10-2.17/lib:/cvmfs/larsoft.opensciencegrid.org/products/sqlite/v3_39_02_00/Linux64bit+3.10-2.17/lib:/cvmfs/larsoft.opensciencegrid.org/products/libxml2/v2_9_12/Linux64bit+3.10-2.17/lib:/cvmfs/larsoft.opensciencegrid.org/products/gsl/v2_7/Linux64bit+3.10-2.17/lib:/cvmfs/larsoft.opensciencegrid.org/products/fftw/v3_3_10/Linux64bit+3.10-2.17/lib:/cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/geant4/v4_10_6_p01f/Linux64bit+3.10-2.17-e20-prof/lib64:/cvmfs/larsoft.opensciencegrid.org/products/xerces_c/v3_2_3c/Linux64bit+3.10-2.17-e20/lib:/cvmfs/larsoft.opensciencegrid.org/products/clhep/v2_4_5_3a/Linux64bit+3.10-2.17-e20-prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/gcc/v9_3_0/Linux64bit+3.10-2.17/lib64:/cvmfs/larsoft.opensciencegrid.org/products/gcc/v9_3_0/Linux64bit+3.10-2.17/lib:/cvmfs/dune.opensciencegrid.org/products/dune/./edepsim/v3_2_0b/Linux64bit+3.10-2.17-e20-prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/gmp/v6_2_1/Linux64bit+3.10-2.17/lib:git /cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/bin/rootcling -v2 -f StructDict.cxx -s /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/lib/libStruct.so -rml libStruct.so -rmf /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/lib/libStruct.rootmap -compilerI/cvmfs/larsoft.opensciencegrid.org/products/tbb/v2021_7_0/Linux64bit+3.10-2.17-e20/include -compilerI/cvmfs/larsoft.opensciencegrid.org/products/gcc/v9_3_0/Linux64bit+3.10-2.17/include/c++/9.3.0 -compilerI/cvmfs/larsoft.opensciencegrid.org/products/gcc/v9_3_0/Linux64bit+3.10-2.17/include/c++/9.3.0/x86_64-pc-linux-gnu -compilerI/cvmfs/larsoft.opensciencegrid.org/products/gcc/v9_3_0/Linux64bit+3.10-2.17/include/c++/9.3.0/backward -compilerI/cvmfs/larsoft.opensciencegrid.org/products/gcc/v9_3_0/Linux64bit+3.10-2.17/lib/gcc/x86_64-pc-linux-gnu/9.3.0/include -compilerI/cvmfs/larsoft.opensciencegrid.org/products/gcc/v9_3_0/Linux64bit+3.10-2.17/lib/gcc/x86_64-pc-linux-gnu/9.3.0/include-fixed -compilerI/usr/local/include -compilerI/cvmfs/larsoft.opensciencegrid.org/products/gcc/v9_3_0/Linux64bit+3.10-2.17/include -compilerI/usr/include -I/storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco -I/storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco -I/cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/include -I/cvmfs/larsoft.opensciencegrid.org/products/clhep/v2_4_5_3a/Linux64bit+3.10-2.17-e20-prof/include -I/cvmfs/larsoft.opensciencegrid.org/products/geant4/v4_10_6_p01f/Linux64bit+3.10-2.17-e20-prof/include/Geant4 -I/storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco/include -I/storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco -I/storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco -I/cvmfs/larsoft.opensciencegrid.org/products/root/v6_26_06b/Linux64bit+3.10-2.17-e20-p3913-prof/include -I/cvmfs/larsoft.opensciencegrid.org/products/clhep/v2_4_5_3a/Linux64bit+3.10-2.17-e20-prof/include -I/cvmfs/larsoft.opensciencegrid.org/products/geant4/v4_10_6_p01f/Linux64bit+3.10-2.17-e20-prof/include/Geant4 -I/storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco/include struct.h /storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco/include/StructLinkDef.h

lib/libStruct_rdict.pcm: sandreco/StructDict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libStruct_rdict.pcm

lib/libStruct.rootmap: sandreco/StructDict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libStruct.rootmap

sandreco/CMakeFiles/StructDict.dir/StructDict.cxx.o: sandreco/CMakeFiles/StructDict.dir/flags.make
sandreco/CMakeFiles/StructDict.dir/StructDict.cxx.o: sandreco/StructDict.cxx
sandreco/CMakeFiles/StructDict.dir/StructDict.cxx.o: sandreco/CMakeFiles/StructDict.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object sandreco/CMakeFiles/StructDict.dir/StructDict.cxx.o"
	cd /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco && /cvmfs/larsoft.opensciencegrid.org/products/gcc/v9_3_0/Linux64bit+3.10-2.17/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT sandreco/CMakeFiles/StructDict.dir/StructDict.cxx.o -MF CMakeFiles/StructDict.dir/StructDict.cxx.o.d -o CMakeFiles/StructDict.dir/StructDict.cxx.o -c /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco/StructDict.cxx

sandreco/CMakeFiles/StructDict.dir/StructDict.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/StructDict.dir/StructDict.cxx.i"
	cd /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco && /cvmfs/larsoft.opensciencegrid.org/products/gcc/v9_3_0/Linux64bit+3.10-2.17/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco/StructDict.cxx > CMakeFiles/StructDict.dir/StructDict.cxx.i

sandreco/CMakeFiles/StructDict.dir/StructDict.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/StructDict.dir/StructDict.cxx.s"
	cd /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco && /cvmfs/larsoft.opensciencegrid.org/products/gcc/v9_3_0/Linux64bit+3.10-2.17/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco/StructDict.cxx -o CMakeFiles/StructDict.dir/StructDict.cxx.s

StructDict: sandreco/CMakeFiles/StructDict.dir/StructDict.cxx.o
StructDict: sandreco/CMakeFiles/StructDict.dir/build.make
.PHONY : StructDict

# Rule to build all files generated by this target.
sandreco/CMakeFiles/StructDict.dir/build: StructDict
.PHONY : sandreco/CMakeFiles/StructDict.dir/build

sandreco/CMakeFiles/StructDict.dir/clean:
	cd /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco && $(CMAKE_COMMAND) -P CMakeFiles/StructDict.dir/cmake_clean.cmake
.PHONY : sandreco/CMakeFiles/StructDict.dir/clean

sandreco/CMakeFiles/StructDict.dir/depend: lib/libStruct.rootmap
sandreco/CMakeFiles/StructDict.dir/depend: lib/libStruct_rdict.pcm
sandreco/CMakeFiles/StructDict.dir/depend: sandreco/StructDict.cxx
	cd /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /storage/gpfs_data/neutrino/users/disilves/sandreco/srcs /storage/gpfs_data/neutrino/users/disilves/sandreco/srcs/sandreco /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64 /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco /storage/gpfs_data/neutrino/users/disilves/sandreco/build_slf7.x86_64/sandreco/CMakeFiles/StructDict.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : sandreco/CMakeFiles/StructDict.dir/depend

