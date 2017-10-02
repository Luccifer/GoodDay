##### BIM/IFC model visual viewer (analyser)

# Manual installation and deploy
## Requirements: 

- **[Python](https://www.python.org/downloads/)**  3.5 (or 2.7), but exactly 3.5.* or 2.7.* versions only.

- **[IfcOpenShell](https://github.com/IfcOpenShell/IfcOpenShell)**

- **[OCE](https://github.com/tpaviot/oce)** OR **[Open Cascade](http://www.opencascade.org/getocc/download/loadocc/)** (required for building IfcGeom. For converting IFC representation items into BRep solids and tesselated meshes)

- **[CMake](https://cmake.org/download/)** (CMake is an open-source, cross-platform family of tools designed to build, test and package software)

- **[Boost](https://dl.bintray.com/boostorg/release/1.65.1/source/)** (C++ source libraries)

- **[ICU](http://site.icu-project.org/download)** (For handling code pages and Unicode in the parser)

- **[OpenCOLLADA](https://github.com/khronosGroup/OpenCOLLADA/)** (For IfcConvert to be able to write tessellated Collada (.dae) files)

- **[SWIG](http://www.swig.org/download.html)** (For building the IfcOpenShell Python interface and the Blender add-on)

## Installation guide:

# Fast installation and deploy

## Requirements:
- **[Anaconda](https://www.anaconda.com/download/)** (Package manager with preinstalled python and virtual environment management)
- **[Precompilled ifcOpenShell python lib](https://github.com/Luccifer/GoodDay/blob/master/src/ifcopenshell.zip)**

## Installation guide:
- Download and install **Anaconda**, no checkboxes should be selected during the installation
- Open conda promt command line and type |
```bash
conda install -c conda-forge -c dlr-sc -c pythonocc -c oce pythonocc-core==0.18 python=3
```
This will install half of libraries by one query promt
- Download precompilled archive with python lib of ifcOpenShell, unzip it and put the ifcOpenShell folder into .../User/Anaconda3/Lib/site-packages
- Type into the conda command line following:
```bash
jupyter notebook
```
- Create the new working notebook and you are primed to work with ifc bim models
