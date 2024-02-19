##########################
# A template for a <package>Config.cmake that can be found by using
# the find_package macro.  This should be modified to import all of
# the dependencies required by the local package.  The template is
# fairly generic, except for the "find_package" related code between
# the beginning and ending boiler plate.
#
# This expect that any targets that are being exported will be
# installed using a command like
#
# install(TARGETS myTarget
#         EXPORT <project>Targets
#          etc)
#
# Note that the <project> is set in the project(<name> <version>) macro
# that should be at the start of your top level CMakeLists.txt
##########################

############# BOILER PLATE
# Include the cmake boiler plate.  The next line should not be touched

####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was PackageConfig.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

macro(check_required_components _NAME)
  foreach(comp ${${_NAME}_FIND_COMPONENTS})
    if(NOT ${_NAME}_${comp}_FOUND)
      if(${_NAME}_FIND_REQUIRED_${comp})
        set(${_NAME}_FOUND FALSE)
      endif()
    endif()
  endforeach()
endmacro()

####################################################################################
############# END BOILER PLATE

##########################
# Add any specific packages that the current package depends on.  This is
# where the find_package commands needed to make the current package
# compile should be listed.
##########################

# SanREco requires ROOT
find_package(ROOT REQUIRED)
if(ROOT_FOUND)
  include(${ROOT_USE_FILE})
endif(ROOT_FOUND)

# SandReco needs EDepSim 
find_package(EDepSim REQUIRED)

#########################
# Leave the next couple of  lines alone since it will automatically customize
# for your package.
#########################

############# BOILER PLATE
include("/storage/gpfs_data/neutrino/users/disilves/sandreco/localProducts_larsoft_v01_00_00_e20_prof/lib/cmake/SandReco/SandRecoTargets.cmake")
check_required_components("SandReco")
############# END BOILER PLATE
