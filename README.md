# VSCode gcc config

**Windows 10 VSCode config** that uses the **WSL** (Windows Bash) for gcc. Made for the subject **PB071** at **FI MU**.

Requires **Windows 10 Creators Update**. 

## How to install
1. Install [VSCode](https://code.visualstudio.com/), C/C++ extension and C/C++ IntelliSense (it will prompt you upon opening the first `.c` or `.cpp` file)
1. [Setup the Windows Bash](https://www.howtogeek.com/249966/how-to-install-and-use-the-linux-bash-shell-on-windows-10/)
1. Open Bash and run the following command to install dependencies: `sudo apt-get install gcc make cmake build-essential clang clang-tidy`
1. Optionally install the Windows version of Clang to use the code formatting (VS Code formatter can't use the WSL version)

## How to create a new project
1. Place all the files from this repo to your new C project folder
1. Add `build`, `.vscode`, `.clang-format` and `.clang-tidy` to `.gitignore` (either global or local)
1. Open the project folder in VS Code (directly, don't open a parent folder)

## Debugging
Switching to debugging tab and pressing the green play button triggers a build and debug. By default, debugger tries to open an executable called `main`. You can change it by editing the marked line at the beginning of `.vscode/launch.json`.

## Available commands (`CTRL-P`)
- `task build` -- reruns CMake if changed, runs Make (runs automatically when debugging)
- `task tidy` -- runs Clang Tidy on the current file and underlines the errors
- `task fix` -- like `task tidy`, but instead of underlining tries to fix the errors automatically