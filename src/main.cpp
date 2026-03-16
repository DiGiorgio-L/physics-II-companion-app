#include <iostream>

#if defined WIN32

#include <windows.h>
/* Windows entry point (WinMain) */
int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
		    PWSTR pCmdLine, int nCmdShow)
{
  
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
