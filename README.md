# Workshop-Debugging-C
How to use gdb with vscode, how to adapt Makefiles to debugging and smart valgrind use

## Vscode
![](https://cdn.discordapp.com/attachments/1025316195383136307/1178449066259128431/image.png?ex=65762f37&is=6563ba37&hm=4151989abbe42b153d2fdde5c0d505d858f72c396b8fae934a8a80ab1143fa49&)\

1. Create a launch.json file
Select gdb(launch) configuration.

2. Keep basic configuration, only changing what's needed.
It should be at *most* <ins>program</ins> (path to executable), <ins>args</ins> (like command-line arguments) and <ins>cwd</ins> (the working directory of the debugger, useful if you have to open files).

[Learn more](https://code.visualstudio.com/docs/cpp/launch-json-reference)

## Makefile
It's good practice to separate uses of Makefiles with rules (e.g.: re, clean, tests_run...).

1. Compilation flags\
*CFLAGS*: warning flags
```sh
CFLAGS  =   -W -Wall -Wextra
```

*CPPFLAGS*: pre-processing flags, such as include paths
```sh
CPPFLAGS    =   -I./include
```

*LDFLAGS*: paths to libraries
```sh
LDFLAGS =   -L./lib
```

*LDLIBS*: libraries
```sh
LDLIBS  =   -lmy -lm -lcfsml-graphics
```

2. Change the flags when needed\
Hint, you can add values to an existing variable with the `+=` operator.

[More about Makefiles](https://www.gnu.org/software/make/manual/html_node/Introduction.html), or [a tutorial](https://makefiletutorial.com/) (not tested tho).

## Valgrind
![](https://cdn.discordapp.com/attachments/1025316195383136307/1178448374207348777/image.png?ex=65762e92&is=6563b992&hm=467c920d273ee3d581b65ac3b5cb024f21a4e50281f0c102c55b5d110390b8e9&)
<br/>
**Read the docs**

## Most importantly
***Check your pointers***. Even if you think you don't need it, yes, you do.\
***Tests***. They are not for nothing, and will warn you of changing comportement in the future.\
You don't have a Segfault for nothing. ***Check your pointers, there's probably something wrong with them.***
