#ifndef P_H
#define P_H

#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>

/*Defined Macros*/
#define max_length 1024

/**
 * struct path - singly linked list
 * @s: string - (malloc'ed string)
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct path
{
	char *s;
	struct path *next;
} path_t;


/*path_t *mainglo;*/
extern char **environ;

/*Main Functions*/
void beginning(void);
char *takeline(void);
char **parseline(char *line);
int forks(char **args);
int exline(char **args);
path_t *make_path(void);
char *check_path(path_t *head, char *cmd);
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
int _strncmp(const char *s1, const char *s2, size_t n);
char *str_concat(char *s1, char *s2);
void free_list(path_t *head);
char *str_concat(char *s1, char *s2);
#endif
