project('test','cpp')

test_program = '''
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
	return deflateInit(&zs_,compression_level);
'''

result = meson.get_compiler('cpp').run( test_program, dependencies: [ subproject('zlib').get_variable('all') ] )

if not result.compiled()
	error('Test program did not compile/link!')
elif result.returcode() != 0
	error('Test program compiled and linked but returned error code!')
else
	message('Test program compiled, linked and worked correctly!')
endif
