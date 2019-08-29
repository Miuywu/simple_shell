# Simple Shell

Simple shell is a limited :/ UNIX command line interpreter.

## Compilation/Style

* All files are compiled on Ubuntu 14.04 LTS
* Programs and functions are compiled with gcc 4.8.4 -Wall -Werror -Wextra -pedantic
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
Trevor Stevenson <tstevenson026@gmail.com>
$
$ cat ls_script | ./simple_shell
AUTHORS exe.c holberton.h README.md simple_shell tokens.c turtleShell.c
$
```