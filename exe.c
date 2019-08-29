#include "holberton.h"
/**
 * exe - uses execve to system call
 * @tokens: arguments for execve
 * Return: 0
 */
int exe(char **tokens)
{
	int check = 0, status = 0;
	pid_t pid;

	pid = fork();
	if (pid == 0)
		check = execve(tokens[0], tokens, NULL);
	else
	{
		wait(&status);
	}
	if (check == -1)
		write(STDERR_FILENO, "Command not found\n", 18);
	return (0);
}
