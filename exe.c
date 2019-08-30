#include "holberton.h"
/**
 * exe - uses execve to system call
 * @tokens: arguments for execve
 * Return: 0
 */
int exe(char *fullpath, char **tokens, struct varholder *holder)
{
	int check = 0, status = 0;
	pid_t pid;

	write (STDOUT_FILENO, "exec\n", 5);
	pid = fork();
	if (pid == 0)
	{
		check = execve(tokens[0], tokens, NULL);
	}
	else
	{
		wait(&status);
		holder->exitstat = status;
		if (fullpath)
			free(fullpath);
		free(tokens);
	}
	if (check == -1)
		write(STDERR_FILENO, "exec error\n", 11);
	return (0);
}
