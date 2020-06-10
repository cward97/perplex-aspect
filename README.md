# PerpleX-ASPECT

This repository contains two libraries: 

- `perplex` : A C++ wrapper for the thermodynamic code [Perple_X](perplex.ethz.ch) (written in Fortran 77).

- `phaseinfo` : A plugin for the geodynamical code [ASPECT](aspect.geodynamics.org) that can analyse phase (mineral) amounts and composition.

## Prerequisites

- [ASPECT](github.com/geodynamics/aspect) (for `phaseinfo` only)

- CMake version `3.11+`

- A Fortran 2003 compatible Fortran compiler (e.g. `gfortran`)

- A C++ 2011 compatible C++ compiler (e.g. `gcc`)

## Installation instructions

An out of source build is recommended:

	mkdir build
	cd build
	cmake ..
	make
	
## Project layout

	data/		ASPECT parameter files and Perple_X data files
	perplex/	Perple_X wrapper
	  extern/	Perple_X source code
	  include/	public header files
	  src/		source code
	  test/		unit tests
	phaseinfo/	ASPECT plugin
	  src/		source code

## Testing

To compile the code with tests enabled, the `PERPLEX_BUILD_TESTING` and `PHASEINFO_BUILD_TESTING` options have to be set to `ON`. For example:

    cmake -DAspect_DIR=/path/to/aspect -DPERPLEX_BUILD_TESTING=ON -DPHASEINFO_BUILD_TESTING=ON ..
