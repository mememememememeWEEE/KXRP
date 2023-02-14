EXEC            = app
LIB_DIR         = ./lib

#Compiler options
CXX             = g++

#Compiler flags
CONFIG_LEVELS   = -g -O2
MACRO           = -DKXRP_DEBUG
EXTRA_CCFLAGS   = -Wall -Wextra
CXXFLAGS        = $(CONFIG_LEVELS) $(EXTRA_CCFLAGS) $(MACRO)

#Linker flags
LIBS            = lib/glfw/libglfw3.a

#Files
CXXFILES        = main.cpp

#To run
default:
	$(CXX) $(CXXFILES) $(LIBS) $(CXXFLAGS)