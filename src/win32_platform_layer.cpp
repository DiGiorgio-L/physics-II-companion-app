#include "../include/win32_platform_layer.h"
#include <iostream>
#include <cassert>
#include <cstdio>

#include <windows.h>

void win32_alloc_debug_console()
{
  /* Allocate new console */
  assert((AllocConsole() != 0) && "Could not allocate debugging terminal!");

  /* Reopen stream buffers */
  std::FILE *fp;
  assert((freopen_s(&fp, "CONOUT$", "w", stdout) == 0)
	 && "Could not reopen stdout stream buffer!");

  assert((freopen_s(&fp, "CONOUT$", "w", stderr) == 0)
	 && "Could not reopen stderr stream buffer!");

  assert((freopen_s(&fp, "CONIN$", "r", stdin) == 0)
	 && "Could not reopen stdin stream buffer!");

  std::string title = "Debugging console";
  assert((SetConsoleTitle(title.c_str()) != 0) && "Could not set console title!");
  
  return;
}

void win32_create_window()
{
  //win_handle = CreateWindowW();
  //HWND handle = 0;
  
  return;
}

