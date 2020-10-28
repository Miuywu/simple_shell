# Simple Shell

Simple shell is a limited UNIX command line interpreter.

Program Flow:
``` main.c -> _strdup.c -> tokens.c -> path.c -> exe.c -> main.c ```

## Compilation/Style

* All files are compiled on Ubuntu 14.04 LTS
* Programs and functions are compiled with 

```$ gcc 4.8.4 -Wall -Werror -Wextra -pedantic *.c  ```
* Code tried to use the Betty style. It is checked using betty-style.pl and betty-doc.pl

## Borrowed functions and system calls

* strtok()
* getline()
* write()
* signal()
* isatty()
* stat()
* wait()
* fork()
* malloc()
* free()
* fflush()

## Examples
interactive mode:

```bash
$ ./simple_shell
shell_prompt$ ls
AUTHORS exe.c holberton.h README.md simple_shell tokens.c turtleShell.c
shell_prompt$
shell_prompt$ exit
$
```

interactive 2:

```bash
$ ./simple_shell
shell_prompt$ ls -l
-rw-rw-r-- 1 vagrant vagrant  110 Aug 27 16:41 AUTHORS
-rw-rw-r-- 1 vagrant vagrant  358 Aug 27 16:41 exe.c
-rw-rw-r-- 1 vagrant vagrant  266 Aug 27 16:41 holberton.h
-rw-rw-r-- 1 vagrant vagrant  826 Aug 27 17:23 README.md
-rwxrwxr-x 1 vagrant vagrant 9103 Aug 27 16:41 simple_shell
-rw-rw-r-- 1 vagrant vagrant  518 Aug 27 16:41 tokens.c
-rw-rw-r-- 1 vagrant vagrant  582 Aug 27 16:41 turtleShell.c
shell_prompt$
```
non-interactive mode:

```bash
$ echo "/bin/ls" | ./simple_shell
AUTHORS exe.c holberton.h README.md simple_shell tokens.c turtleShell.c
$
$ cat AUTHORS
The creators of the project are:

Minh-Huy Vu <trulymhvu@gmail.com>
$
$ cat ls_script | ./simple_shell
AUTHORS exe.c holberton.h README.md simple_shell tokens.c turtleShell.c
$
```

![Simple Shell executing "ls -la"](https://github.com/Miuywu/simple_shell/blob/master/tshell.PNG "Screenshot")
## About me

I am a 22 year old software engineer with the goal of developing fun and useful AR/VR experiences in the coming years. I 
am currently expanding my skills at Holberton School. 
    
[LinkedIn](https://www.linkedin.com/in/minh-huy-v-531911188/)
[twitter](https://twitter.com/Miuywu)
    
## Portfolio Project

[Interstellar Penguins UE4 Game](https://github.com/inspiredtolive/Interstellar_Penguin)
Interstellar Penguins is a 3D adventure game that aside from map assets, was created from the ground up in Unreal Engine 
4 by my partner Marco and myself. We developed the character assets, then basic player and game interactions, and finally
the NPC Shark and Fish AI's that have dynamic behaviours based on player actions. Noteably, the individual fish in the
schoolsmove according to a custom schooling algorithm which allows them to move as a group without colliding into 
eachother.
