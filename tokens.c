#include "holberton.h"
/**
 * ListToken - creates and returns an array of tokens made from an input str
 * @input: string given by main
 * Return: pointer to array of tokens
 */
char **ListToken(char *input)
{
	char *tok, **list;
	int i;

	list = malloc(sizeof(char) * 2000);
	if (!list)
		exit(1);
	tok = strtok(input, " \t\n");
	for (i = 0; tok; i++)
	{
		list[i] = tok;
		tok = strtok(NULL, " \t\n");
	}
	list[i] = NULL;
	return (list);
}
