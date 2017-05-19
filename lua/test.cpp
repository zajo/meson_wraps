extern "C"
	{
	#include <lua.h>
	#include <lauxlib.h>
	}

int
main()
	{
	lua_State * L=lua_newstate(0,0);
	if( !L )
		return 1;
	lua_close(L);
	}
