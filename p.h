#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define max_length 1024;
/*#define delims " \t\r\n\a"*/

void beginning(void);
char *takeline(void);
char **parseline(char *line);
int forks(char **args);
int exline(char **args);
int exit_fun(char **args);
/*
  Function Declarations for builtin shell commands:

char *bi_str[] = {
	"exit"
};


int (*bi[]) (char **) = {
	&exit_fun
};

int bi_return() {
	return sizeof(bi_str) / sizeof(char *);
}

int exit_fun(char **args)
{
	return 0;
}
*/
