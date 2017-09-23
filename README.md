# VSCode C++ config

**Windows 10** (**WSL** -- Windows Bash) and **Linux** VSCode config for **C++**. Made for the subject **PB161** at **FI MU**. (There is a branch that contains old **PB071** stuff).

On Windows requires the **Windows 10 Creators Update**. 

## How to install
1. Install [VSCode](https://code.visualstudio.com/), C/C++ extension and C/C++ IntelliSense (it will prompt you upon opening the first `.c` or `.cpp` file)
1. If on Windows, [setup the Windows Bash](https://www.howtogeek.com/249966/how-to-install-and-use-the-linux-bash-shell-on-windows-10/) and install MinGW to `C:/MinGW/` (needed for includes)
1. Open Bash and run the following command to install dependencies: `sudo apt-get install gcc make cmake build-essential llvm clang clang-tidy libstdc++6-5-dbg libc6-dbg`
1. If on Windows, install the Windows version of Clang to use the code formatting (VS Code formatter can't use the WSL version)
1. Set the `"C_Cpp.clang_format_path"` VSCode setting -- usually `"/usr/bin/clang-format"` on Linux and `"C:\\Program Files (x86)\\LLVM\\bin\\clang-format.exe"` on Windows.

## How to create a new project
1. Place all the files from this repo to your new C++ project folder
1. Open the project folder in VS Code (directly, don't open a parent folder)

## Debugging
Switching to debugging tab and pressing the green play button triggers a build and debug. You can choose either "Main" or "Test" configuration.

On Windows, input and output will go to `/dev/tty1` -- simply open a single Bash window and run `sh` there, and then check that you're on tty1 using the command `tty`. After that, you can start debugging.

You can add arguments and redirect input/output by editing the property `"args"` in `launch.json`.

## Available commands (`CTRL-P`)
- `task build` -- builds the project
- `task tests` -- builds and runs tests, then underlines failed tests
- `task tidy` -- runs clang-tidy on the **current opened file** and underlines the errors
- `task fix` -- like `task tidy`, but instead of underlining tries to fix the errors automatically
