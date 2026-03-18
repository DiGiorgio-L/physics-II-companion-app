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

  HWND window_handle = win32_create_window(hInstance);

  /* Basic message loop */
  MSG message;
  bool is_running = true;
  while (is_running)
  {
    is_running = GetMessage(&message, window_handle, NULL, NULL);
    
    /* NOTE: don't know what to do with the return value of TranslateMessage().
     * I will investigate further and see what I get. */
    TranslateMessage(&message);
    
    /* According to the Microsoft documentation, the return value of the
     * DispatchMessage() function can be ignored since it doesn't represent
     * neither a state of success nor failure of the call. */
    DispatchMessage(&message);
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
