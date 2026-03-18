#include <iostream>
#include <cassert>
#include <cstdio>
#include <windows.h>

#include "../include/win32_platform_layer.h"

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

void win32_create_window(HINSTANCE hinstance)
{
  /* Window class */
  const wchar_t *class_name = L"main_window_class";
  WNDCLASSEXW window_class =
    {
      sizeof(WNDCLASSEX),
      CS_VREDRAW | CS_HREDRAW | CS_OWNDC,
      win32_window_procedure,
      0,
      0,
      hinstance,
      NULL,
      NULL,
      NULL,
      NULL,
      class_name,
      NULL
    };
  assert((RegisterClassExW(&window_class) != 0) && "Could not register window class");

  HWND window_handle = CreateWindowW(class_name,
				     L"Physics II Companion App",
				     WS_OVERLAPPEDWINDOW | WS_VISIBLE,
				     CW_USEDEFAULT,
				     CW_USEDEFAULT,
				     1280,
				     720,
				     NULL,
				     NULL,
				     hinstance,
				     NULL);
  assert((window_handle != NULL) && "Could not create window!");
  
  
  return;
}

/* Window procedure */
LRESULT CALLBACK win32_window_procedure(HWND window_handle, UINT message,
					WPARAM wparam, LPARAM lparam)
{  
  return DefWindowProcW(window_handle, message, wparam, lparam);
}

