#ifndef _holberton_h_
#define _holberton_h_


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

typedef struct varholder
{
	int exitstat;
}varholder;

int spacer(char *);
void signal_read(int);
char *_strcat(char *dest, char *src);
char *pathAppend(char *, char *);
char *_strcpy(char *dest, char *src);
char *pathFinder(char **env);
int pEnv(char **);
int _strlen(char *);
int _strcmp(char *, char *);
char **ListToken(char *);
int exe(char *, char **, struct varholder *);
char *_strdup(char *str);

#endif
