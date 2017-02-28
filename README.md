# VSCode gcc config

Made for the subject PB071 at FI MU.

Tested on Windows 10 and Ubuntu.

How to use:

1. Install [VSCode](https://code.visualstudio.com/), C/C++ extension and C/C++ IntelliSense (it will prompt you upon opening the first `.c` or `.cpp` file)
2. (Windows only) Install [MinGW 64bit](https://sourceforge.net/projects/mingw-w64/) and [MSYS 64bit](http://www.msys2.org/). Add their `/bin` folders to PATH. If you install in a location other than `C:\\MinGW\\`, do a search-replace in the json files.
3. Open command line in the project folder (the one containing `CMakeLists.txt`) and run `mkdir build && cd build && cmake ..`
4. Place `.vscode` from this repo to the project folder
5. Add `build` and `.vscode` to `.gitignore`
6. Opening the project folder in VS Code and pressing F5 inside a `.c` file should trigger a make and debugging in `gdb`
7. (Optional) You can change naming convention of the resulting executable by editing the "program" field in `launch.json`. For example, remove the prefixing by folder name by removing `${workspaceRootFolderName}_`.