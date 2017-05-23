#include "GL/glew.h"

int
main()
	{
	glewExperimental=TRUE;
	GLenum err=glewInit();
	if(err!=GLEW_OK)
		return 1;
	return 0;
	}
