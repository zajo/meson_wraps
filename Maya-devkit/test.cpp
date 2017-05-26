#ifndef MAYA_VERSION
#error Error in meson.build, it should #define MAYA_VERSION
#endif

#ifndef MAYA_LOCATION
#error Error in meson.build, it should #define MAYA_LOCATION
#endif

#include "maya/MObject.h"
#include <iostream>

int
main()
	{
	MObject mo;
	std::cout << "MAYA_VERSION #defined as: \"" MAYA_VERSION "\"\nMAYA_LOCATION #defined as: \"" MAYA_LOCATION "\"\n";
	return 0;
	}
