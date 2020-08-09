#include <stdio.h>
#include <stdlib.h>

#include "LUA/lauxlib.h"
#include "LUA/lualib.h"
#include "LUA/lua.h"
int main()
{

	L = luaL_newstate(); //建立LUA运行环境
	luaopen_base(L);
	luaB_dofile(L);


    printf("Hello LUA!\n");
    return 0;
}
