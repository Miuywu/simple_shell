#include "holberton.h"
/**
 * pEnv - prints environment vars
 * @env: array of pointers to env vars
 * Return: number of vars printed
 */
int pEnv(char **env)
{
	int count = 0;

	while (env[count])
	{
		write(STDOUT_FILENO, env[count], _strlen(env[count]));
		write(STDOUT_FILENO, "\n", 1);
		count++;
	}
	return (count);
}
