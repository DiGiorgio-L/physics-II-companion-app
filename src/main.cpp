#include <iostream>

#if defined WIN32
/* Windows entry point (WinMain) */
int main(int argc, char **argv)
{
  std::cout << "Hello Win32!" << std::endl;
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
