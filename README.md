# SHELL 
This README is about the shell and how it is used.




# Description
The Shell is a UNIX term for the interactive user interface withan operating system. The shell is the layer of programming that understands and executes the commands a user enters. In some system the shell is called a command interpreter. 
The shell gets started when you log in or open a console.

# Different Shells

There are different shells which are more or less same but the features and syntaxes are different.

Bourne shell The most basic shell available on all UNIX systems

Korn Shell Based on the Bourne shell with enhancements

C Shell Similar to the C programming language in syntax

Bash Shell Bourne Again Shell combines the advantages of the Korn Shell and the C Shell. The default on most Linux distributions.


The shell is not part of system kernel, but uses the system kernel to execute programs.



# Examples

#### Input: ls -l  
     Output: -rw-rw-r-- 1 vagrant vagrant  685 Nov 17 00:13 append_file.c
     -rw-rw-r-- 1 vagrant vagrant  410 Nov 17 00:12 args.c
     -rw-rw-r-- 1 vagrant vagrant  162 Nov 20 15:10 AUTHORS
     -rw-rw-r-- 1 vagrant vagrant  859 Nov 17 00:13 create_file.c
     -rw-rw-r-- 1 vagrant vagrant  398 Nov 17 00:12 fork.c
     -rw-rw-r-- 1 vagrant vagrant 1156 Nov 20 19:08 man_1_simple_shell
     -rw-rw-r-- 1 vagrant vagrant  222 Nov 17 00:13 path_search.c
     -rw-rw-r-- 1 vagrant vagrant  229 Nov 17 00:12 pid.c
     -rw-rw-r-- 1 vagrant vagrant  509 Nov 17 00:12 prompt.c
     -rw-rw-r-- 1 vagrant vagrant 3330 Nov 20 20:14 README.md	
     -rw-rw-r-- 1 vagrant vagrant  327 Nov 17 00:12 shell.h
     -rw-rw-r-- 1 vagrant vagrant   18 Nov 17 00:12 simple_shell.c
     -rw-rw-r-- 1 vagrant vagrant  489 Nov 17 00:13 _strcat.c
     -rw-rw-r-- 1 vagrant vagrant  409 Nov 17 00:13 _strcmp.c
     -rw-rw-r-- 1 vagrant vagrant  218 Nov 17 00:13 _strlen.c
     -rw-rw-r-- 1 vagrant vagrant  472 Nov 17 00:13 _strncmp.c
     drwxrwxr-x 3 vagrant vagrant 4096 Nov 20 19:15 tested_shell
     -rw-rw-r-- 1 vagrant vagrant 1178 Nov 17 00:12 tok.c
     -rw-rw-r-- 1 vagrant vagrant  453 Nov 17 00:13 tokenize.c
     -rw-rw-r-- 1 vagrant vagrant  458 Nov 17 00:13 _which.c
     -rw-rw-r-- 1 vagrant vagrant 1435 Nov 17 00:13 which_main.c


# Tasks
Task - Description

[x] 0. Create a README, man page and AUTHORS page for our Shell

[x] 1. To make sure our code passes Betty check 

[x] 2. Write a UNIX command line interpreter that handles end-of-file condition 

[x] 3. Handle command lines with arguments 

[x] 4. Handle the PATH

[x] 5. Implement the EXIT built-in

[x] 6. Implement the ENV built-in


# Requirements
* Allowed editors: vi, vim, emacs
* All files will be compiled on Ubuntu 14.04 LTS
* Programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* A README.md file, at the root of the folder of the project is mandatory
* No more than 5 functions per file
* All your header files should be include guarded
* List of allowed functions and system calls
  * access (man 2 access)
  * chdir (man 2 chdir)
  * close (man 2 close)
  * closedir (man 3 closedir)
  * execve (man 2 execve)
  * exit (man 3 exit)
  * fork (man 2 fork)
  * free (man 3 free)
  * stat (__xstat) (man 2 stat)
  * lstat (__lxstat) (man 2 lstat)
  * fstat (__fxstat) (man 2 fstat)
  * getcwd (man 3 getcwd)
  * getline (man 3 getline)
  * kill (man 2 kill)
  * malloc (man 3 malloc)
  * open (man 2 open)
  * opendir (man 3 opendir)
  * perror (man 3 perror)
  * read (man 2 read)
  * readdir (man 3 readdir)
  * signal (man 2 signal)
  * strtok (man 3 strtok)
  * wait (man 2 wait)
  * waitpid (man 2 waitpid)
  * wait3 (man 2 wait3)
  * wait4 (man 2 wait4)
  * write (man 2 write)
  * _exit (man 2 _exit)
  * isatty (man 3 isatty)
  * fflush (man 3 fflush)

# Files to be included:

fork3.c
_getenv.c
getline.c
mainFunc.c
P.h
print_path.c
print_env.c
_putchar.c
strfun.c
strtok2.c

it will be complied using these flags
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh