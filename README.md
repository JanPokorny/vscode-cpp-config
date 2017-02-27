# VSCode gcc config

Made for the subject PB071 at FI MU.

Tested on Windows 10, but should work on other systems as well.

How to use:

1. Install [VSCode](https://code.visualstudio.com/), C/C++ extension, and (on Windows) [MinGW 64bit](https://sourceforge.net/projects/mingw-w64/)
2. Run `cmake-gui`, set the build folder to a subfolder `./build/`, click Configure, when prompted select MinGW (win) or GNU (linux), select the correct path to `gcc`, and click Generate
3. Place `.vscode` from this repo to the project folder
4. 
    - (Windows) Replace all `C:\\Dev\\MinGW64\\`s in the JSON files with your MinGW location
    - (Linux) Replace `C:\\Windows\\System32\\cmd.exe` in `tasks.json` with `sh`, `/c` with `-c`, and also all `\\`s with `/`s
5. Add `build` and `.vscode` to `.gitignore`
6. Pressing F5 inside a `.c` file should trigger a make and debugging in `gdb`