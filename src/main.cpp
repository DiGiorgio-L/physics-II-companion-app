#include <iostream>
#include <cassert>

#if defined WIN32

#include <windows.h>
#include "../include/win32_platform_layer.h"

/* Windows entry point (WinMain) */
int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
		    PWSTR pCmdLine, int nCmdShow)
{
  /* Temporary functions. They are meant to be contained inside a struct */
  HWND window_handle {};

  /* DEBUGGING CONSOLE */
  win32_alloc_debug_console();
  
  win32_create_window(hInstance);
  
  for(;;)
  {
    /* Test infinite loop */
  }
  
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
