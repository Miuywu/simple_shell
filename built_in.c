#include "holberton.h"
/**
 * pEnv - prints environment vars
 * @env: array of pointers to env vars
 * Return: number of vars printed
 */

int pEnv(char **env)
{
	char **envcopy = env;
	int count = 0;

	while (envcopy[count])
	{
		write(STDOUT_FILENO, envcopy[count], _strlen(envcopy[count]));
		write(STDOUT_FILENO, "\n", 1);
		count++;
	}
	return (count);
}
