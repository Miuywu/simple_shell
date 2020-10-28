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
	struct varholder holder;

	(void) ac;
	(void) av;
	holder.exitstat = 0;
	while (inCheck != -1)
	{

		signal(SIGINT, signal_read);/* cntrl + c */
		if (isatty(STDIN_FILENO) == 1)
			write(STDOUT_FILENO, "Tshell$ ", 8);
		inCheck = getline(&line, &len, stdin);/* getline */
		if (isatty(STDIN_FILENO) == 1)
			if (inCheck == -1)
			{
				write(STDOUT_FILENO, "\n", 1);
				free(line);
				exit(holder.exitstat);
			}
		if (_strcmp(line, "exit") == 0)
			exit(0);
		else if (_strcmp(line, "env") == 0)
			pEnv(env);
		else if (inCheck != -1)
		{
			toks = ListToken(line);
			fullpath = pathAppend(path, toks[0]);

			if (toks[0][0] == '/')/*enter in address of cmd*/
			{
				exe(NULL, toks, &holder);
			}
			else if (fullpath)/*name of cmd*/
			{
				toks[0] = fullpath;
				exe(fullpath, toks, &holder);
			}
			else
			{
				write(STDERR_FILENO, "error\n", 6);
			}
		}
	}
	free(line);
	return (EXIT_SUCCESS);
}
