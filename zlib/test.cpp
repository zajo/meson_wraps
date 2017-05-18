#include "zlib.h"

int
main()
	{
	z_stream zs;
	zs.zalloc = Z_NULL;
	zs.zfree = Z_NULL;
	zs.next_in = Z_NULL;
	zs.avail_in = 0;
	zs.next_out = Z_NULL;
	zs.avail_out = Z_NULL;
	return deflateInit(&zs,0);
	}
