.TH HSH 1 " 28 March 2018" "Shell man page" "General Commands Manual"
.SH NAME
.B Shell
- A basic UNIX command line interpreter.
.SH SYNOPSIS
.LP
.B  Shell
 a shell that can interpret and execute arguments from command line and read from the standard input.
.SH DESCRIPTION
 The shell is a language interpeter that read line by line from a file or the terminal line.
It then interprets the lines, and if at the begining of the line there is a valid
 command it then executes it. The shell will break-up the environemtal variables
 to find the path for commands.

.SH ARGUMENTS
The shell will first examine the first command given in standard input to see if it is contained in builtin funct
ions If no built-in are found then the PATH will be parsed to try to find the command executable. If the full path of a function is entered it will just run it.
.SH USAGE
All the files are to be compiled on an Ubuntu 14.04 LTS machine with gcc -Wall -Werror -Wextra -pedantic *.c -o
.SH BUILT-IN COMMANDS
.LP
.B exit
 This will exit the shell

.LP
.B pwd
 This will print the current working directory

Examples
Print working directory
.IP
.br
$ pwd

/home/vagrant/simple_shell

Print Environment
.IP
.br
$ env

\&XDG_SESSION_ID=4
.br
\&COMP_WORDBREAKS=
.br
\&"'><;|&(:
.br
\&TERM=xterm-256color
.br
\&SHELL=/bin/bash
.br
\&SSH_CLIENT=10.0.2.2 49825 22
.br
\&SSH_TTY=/dev/pts/1
.br
\&USER=vagrant
.br
\&MAIL=/var/mail/vagrant
.br
\&PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games
.br
\&PWD=/home/vagrant/simple_shell
.br
\&LANG=en_US.UTF-8
.br
\&SHLVL=1
.br
\&HOME=/home/vagrant
.br
\&LOGNAME=vagrant
.br
\&SSH_CONNECTION=10.0.2.2 49825 10.0.2.15 22
.br
\&LESSOPEN=| /usr/bin/lesspipe %s
.br
\&XDG_RUNTIME_DIR=/run/user/1000
.br
\&LESSCLOSE=/usr/bin/lesspipe %s %s
.br
\&_=/usr/bin/env
.br
\&OLDPWD=/home/vagrant





.SH RETURN VALUES
The shell will always return 0 on success

.SH SEE ALSO
.I sh(1)

.SH BUGS
only handles simple arguments

.SH AUTHORS
Pamela Maupin
Darnell Garvey
