#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*Defined Macros*/
#define max_length 1024;
/*#define delims " \t\r\n\a"*/

extern char **environ;

/*Main Functions*/
void beginning(void);
char *takeline(void);
char **parseline(char *line);
int forks(char **args);
int exline(char **args);

/*Helper Functions*/

int print_env(void);
int _putchar(char c);
char *_strdup(char *str);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
char errors_line(char line);
char *_getenv(char *name);
char *look_line(char *token);
