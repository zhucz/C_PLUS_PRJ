#include <stdio.h>
#include <stdlib.h>

#include "LUA/lauxlib.h"
#include "LUA/lualib.h"
#include "LUA/lua.h"
int main()
{

	L = luaL_newstate(L); //建立LUA运行环境
	luaopen_base(L);
	luaB_dofile(L);
    luaB_assert(L);

    printf("Hello LUA!\n");
    return 0;
}
