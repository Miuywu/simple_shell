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

	for (a = 0; env[a]; a++)
	{
		if (_strcmp(env[a], "PATH") == 0 && env[a][4] == '=')
		{
			pathcopy = &env[a][5];
		/*path = strtok(pathcopy, "=");
			path = strtok(NULL, "=");*/
			return (pathcopy);

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

	tok = strtok(pathcopy, ":");
	while(tok)
	{
		list = malloc(_strlen(tok) + _strlen(cmd) + 2);
		_strcpy(list, tok);
		_strcat(list, "/");
		_strcat(list, cmd);

		if (stat(list, &st) == 0)
		{
			free(pathcopy);
			return (list);
		}
		free(list);
		tok = strtok(NULL, ":");
	}
	free(pathcopy);
	return (NULL);
}
