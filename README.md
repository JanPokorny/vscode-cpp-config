# VSCode gcc config

Made for the subject **PB071** at **FI MU**.

Tested on **Windows 10** and **Ubuntu**.

## How to use
1. Install [VSCode](https://code.visualstudio.com/), C/C++ extension and C/C++ IntelliSense (it will prompt you upon opening the first `.c` or `.cpp` file)
1. Install LLVM (package manager on Linux, [binary installer](http://llvm.org/pre-releases/win-snapshots/) on Windows)
1. (Windows only) Install [MinGW](https://sourceforge.net/projects/mingw/) (use the default location, `C:\\MinGW\`) and install gcc, build tools and msys using the GUI. Then add `C:\MinGW\msys\1.0\bin` and `C:\MinGW\bin` to the system PATH. (This replaces the Windows bash. If you still want to use it, delete `bash.exe` from `C:\MinGW\msys\1.0\bin`)
1. Place all the files from this repo to the project folder
1. Add `build`, `.vscode`, `.clang-format` and `.clang-tidy` to `.gitignore`
1. Open the project folder in VS Code (directly, don't open a parent folder)
1. Press `CTRL-P` and type `task cmake`, this will init CMake in the build folder.

## Debugging
Switching to debugging tab and pressing the green play button triggers a build and debug. By default, debugger tries to open an executable with the same name as the currently opened source file (without extension). You can change it by editing the marked line at the beginning of `.vscode/launch.json`.

## Available commands (`CTRL-P`)
- `task cmake` -- runs CMake and creates the build directory (also adds debug flags)
- `task build` -- runs Make (runs automatically when debugging)
- `task tidy` -- runs Clang Tidy on the current file and underlines the errors
- `task fix` -- like `task tidy`, but instead of underlining tries to fix the errors automatically
- `task format` -- formats the current file using Clang Format