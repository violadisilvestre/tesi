#!/bin/bash
########################################################################
# cetpkg_info.sh
#
#   Generated script to define variables required by buildtool to
#   compose the build environment.
#
# If we're being sourced, define the expected shell and environment
# variables; otherwise, print the definitions for user information.
#
##################
# NOTES
#
# * The definitions printed by executing this script are formatted to be
#   human-readable; they may *not* be suitable for feeding to a shell.
#
# * This script is *not* shell-agnostic, as it is not intended to be a 
#   general setup script.
#
# * Most items are not exported to the environment and will therefore
#   not be visible downstream of the shell sourcing this file.
#
########################################################################

( return 0 2>/dev/null ) && eval "__EOF__() { :; }" && \
  _cetpkg_catit=(:) || _cetpkg_catit=(cat '<<' __EOF__ '|' sed -Ee "'"'s&\\([^\\]|$)&\1&g'"'" )
eval "${_cetpkg_catit[@]}"$'\n'\
export\ CETPKG_SOURCE\=\\\/storage\\\/gpfs_data\\\/neutrino\\\/users\\\/disilves\\\/sandreco\\\/srcs$'\n'\
export\ CETPKG_BUILD\=\\\/storage\\\/gpfs_data\\\/neutrino\\\/users\\\/disilves\\\/sandreco\\\/build_slf7\\\.x86_64$'\n'\
CETPKG_NAME\=larsoft_MRB$'\n'\
CETPKG_VERSION\=v01_00_00$'\n'\
export\ CETPKG_QUALSPEC\=e20\\\:prof$'\n'\
CETPKG_CQUAL\=e20$'\n'\
CETPKG_BUILD_TYPE\=prof$'\n'\
CETPKG_EXTQUAL\=$'\n'\
CETPKG_CMAKE_ARGS\=\(\\\-DCET_PV_045470_EXEC_PREFIX\\\:STRING\\\=slf7\\\.x86_64\\\.e20\\\.prof\ \\\-DCET_PV_045470_UPS_BUILD_ONLY_DEPENDENCIES\\\=\ \\\-DCET_PV_045470_UPS_PRODUCT_FLAVOR\\\:STRING\\\=Linux64bit\\\+3\\\.10\\\-2\\\.17\ \\\-DCET_PV_045470_UPS_PRODUCT_NAME\\\:STRING\\\=sandreco\ \\\-DCET_PV_045470_UPS_PRODUCT_VERSION\\\:STRING\\\=v01_00_00\ \\\-DCET_PV_045470_UPS_QUALIFIER_STRING\\\:STRING\\\=e20\\\:prof\ \\\-DCMAKE_CXX_COMPILER\\\:STRING\\\=g\\\+\\\+\ \\\-DCMAKE_CXX_EXTENSIONS\\\:BOOL\\\=OFF\ \\\-DCMAKE_CXX_STANDARD\\\:STRING\\\=17\ \\\-DCMAKE_CXX_STANDARD_REQUIRED\\\:BOOL\\\=ON\ \\\-DCMAKE_C_COMPILER\\\:STRING\\\=gcc\ \\\-DCMAKE_Fortran_COMPILER\\\:STRING\\\=gfortran\ \\\-DUPS_CXX_COMPILER_ID\\\:STRING\\\=GNU\ \\\-DUPS_CXX_COMPILER_VERSION\\\:STRING\\\=9\\\.3\\\.0\ \\\-DUPS_C_COMPILER_ID\\\:STRING\\\=GNU\ \\\-DUPS_C_COMPILER_VERSION\\\:STRING\\\=9\\\.3\\\.0\ \\\-DUPS_Fortran_COMPILER_ID\\\:STRING\\\=GNU\ \\\-DUPS_Fortran_COMPILER_VERSION\\\:STRING\\\=9\\\.3\\\.0\ \\\-DWANT_UPS\\\:BOOL\\\=ON\ \\\-DCMAKE_BUILD_TYPE\\\:STRING\\\=RelWithDebInfo\ \\\-DCET_PV_PREFIX\\\:STRING\\\=045470\\\;cacbce\)$'\n'\
export\ CETPKG_CXX_COMPILER\=g\\\+\\\+$'\n'\
export\ CETPKG_CXX_COMPILER_ID\=GNU$'\n'\
export\ CETPKG_CXX_COMPILER_VERSION\=9\\\.3\\\.0$'\n'\
export\ CETPKG_CXX_STANDARD\=17$'\n'\
export\ CETPKG_C_COMPILER\=gcc$'\n'\
export\ CETPKG_C_COMPILER_ID\=GNU$'\n'\
export\ CETPKG_C_COMPILER_VERSION\=9\\\.3\\\.0$'\n'\
export\ CETPKG_Fortran_COMPILER\=gfortran$'\n'\
export\ CETPKG_Fortran_COMPILER_ID\=GNU$'\n'\
export\ CETPKG_Fortran_COMPILER_VERSION\=9\\\.3\\\.0$'\n'\
CETPKG_CMAKE_BUILD_TYPE\=RelWithDebInfo$'\n'\
export\ CETPKG_FLAVOR\=Linux64bit\\\+3\\\.10\\\-2\\\.17$'\n'\
export\ CETPKG_FQ_DIR\=slf7\\\.x86_64\\\.e20\\\.prof$'\n'\
CETPKG_PROJECT_VARIABLE_PREFIX\=cacbce$'\n'\
$'\n'\
__EOF__
( return 0 2>/dev/null ) && unset __EOF__ \
  || true
