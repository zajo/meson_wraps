#include "ft2build.h"
#include FT_FREETYPE_H

int
main()
	{
	FT_Library l;
	if( FT_Error error=FT_Init_FreeType( &l ) )
		return 1;
	FT_Done_FreeType(&l);
	return 0;
	}
