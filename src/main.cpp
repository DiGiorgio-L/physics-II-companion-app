#include <iostream>
#include <cassert>

#if defined WIN32

#include <windows.h>
#include "../include/win32_platform_layer.h"

/* Windows entry point (WinMain) */
int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
		    PWSTR pCmdLine, int nCmdShow)
{
  /* DEBUGGING CONSOLE */
  win32_alloc_debug_console();
  
  win32_create_window();


  
  return 0;
}

#elif defined MACOS
/* macOS entry point */
int main(int argc, char *argv[])
{
  std::cout << "Hello macOS!" << std::endl;
  return 0;
}

#elif defined LINUX
/* Linux entry point */
int main(int argc, char *argv[])
{
  std::cout << "Hello Linux!" << std::endl;
  return 0;
}

#endif
