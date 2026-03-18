#ifndef WIN32_PLATFORM_LAYER_H
#define WIN32_PLATFORM_LAYER_H

#include <windows.h>
#include <cstdint>

void win32_alloc_debug_console();
HWND win32_create_window(HINSTANCE hinstance);

/* Window procedure */
LRESULT CALLBACK win32_window_procedure(HWND window_handle, UINT message,
					WPARAM wparam, LPARAM lparam);

#endif
