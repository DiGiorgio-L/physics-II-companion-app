@echo off
setlocal EnableDelayedExpansion

set "files="
set "output=../bin/debug/main.exe"
set "options=-std=c++23 -Wall -Wcast-align -Wconversion -Wdouble-promotion -Werror -Wextra -Wformat=2 -Wnull-dereference -Wpedantic -Wno-unused-parameter -Wshadow -O0 -g"
set "includes=-l kernel32"
set "flags=-D WIN32"

rem Change directory to src dir
pushd ..\src

rem Retrieve all .cpp files
for %%F in (*.cpp) do (
    set files=!files! %%F
)

rem Debugging echoes
echo Files: %files%
echo Output: %output%

clang++ %options% %flags% %files% --output=%output%

rem Return to original dir
popd

