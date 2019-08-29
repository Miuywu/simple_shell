#include "holberton.h"
/**
 * pathFinder - finds the pointer for PATH in env
 * @env: array of enviroment vars
 * Return: pointer to copy of path
 */
char *pathFinder(char **env)
{
	int a;
	char *pathcopy;
	char *path;

	for (a = 0; env[a]; a++)
	{
		if (_strcmp(env[a], "PATH") == 0)
		{
			pathcopy = _strdup(env[a]);
			path = strtok(pathcopy, "=");
			path = strtok(NULL, "=");
			return (path);

		}
	}

	return(NULL);
}
/**
 * pathAppend - adds command name to path
 * @path: input path
 * Return: new path
 */
char *pathAppend(char *path, char *cmd)
{
	char *tok, *list;
	struct stat st;
	char *pathcopy = _strdup(path);

	/*	if (!list)
		exit(1);*/
	tok = strtok(pathcopy, ":");
	while(tok)
	{
		list = malloc(_strlen(tok) + _strlen(cmd) + 2);
		_strcpy(list, tok);
		_strcat(list, "/");
		_strcat(list, cmd);

		if (stat(list, &st) == 0)
			return (list);

		tok = strtok(NULL, ":");
	/*	free(list);*/
	}
	return (NULL);
}
