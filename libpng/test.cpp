#include "png.h"

int
main()
	{
	png_structp png_ptr = png_create_read_struct(PNG_LIBPNG_VER_STRING,0,0,0);
	if( !png_ptr )
		return 1;
	png_infop info_ptr = png_create_info_struct(png_ptr);
	if( !info_ptr )
		return 2;
	png_infop end_info = png_create_info_struct(png_ptr);
	if( !end_info )
		return 3;
	png_destroy_read_struct(&png_ptr,&info_ptr,&end_info);
	return 0;
	}
