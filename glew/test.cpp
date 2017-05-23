#include "GL/glew.h"

int
main()
	{
	GLenum err=glewInit();
	if(err==GLEW_OK) //Expected to fail because there is no current OpenGL context
		return 1;
	return 0;
	}
