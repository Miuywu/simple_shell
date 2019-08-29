#include "holberton.h"
/**
 * main - prints prompt then waits for commands
 * @ac: argument count
 * @av: array of arguments
 * @env: array of arguments pertaining to current environment
 * Return: 0; error tag
 */
int main(int ac, char **av, char **env)
{
	ssize_t inCheck = 0;
	char *line = NULL, *path = pathFinder(env);
	size_t len = 0;
	char **toks = NULL;
	char *fullpath = NULL;

	(void) ac;
	(void) av;

	while (inCheck != -1)
	{

		signal(SIGINT, signal_read);/* cntrl + c */
		if (isatty(STDIN_FILENO) == 1)
			write(STDOUT_FILENO, "Tshell$ ", 8);
		inCheck = getline(&line, &len, stdin);/* getline */
		if (isatty(STDIN_FILENO) == 0)
			if (inCheck == -1 || inCheck == EOF)
				exit(EXIT_FAILURE);
		if (_strcmp(line, "exit") == 0)
			exit(0);
		if (_strcmp(line, "env") == 0)
			pEnv(env);
		if (inCheck != -1)
		{
			toks = ListToken(line);
			fullpath = pathAppend(path, toks[0]);

			if (toks[0][0] == '/')
			{
				exe(toks);
			}


			else if (fullpath)
			{
				toks[0] = fullpath;
				exe(toks);
			}
			else
			{
				write(STDERR_FILENO, "error", 5);
			}
		}
		else
		{
			write(STDOUT_FILENO, "\n", 1);
			if (isatty(STDIN_FILENO))
				exit(0);

		}
	}
	(void) env;
	free(line);

	return (EXIT_SUCCESS);
}

