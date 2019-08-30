#include "holberton.h"
#include "holberton.h"

/**
 * spacer - moves pointer of line to first non space
 * @line: input line
 * Return: number of spaces
 */
int spacer(char *line)
{
	int a;

	for (a = 0; line[a] == ' '; a++)
		;
	return (a);
}
/**
 * _strcat - concat 2 strs
 *
 * Return: null
 * @src: input
 * @dest: out
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] >= 32 && dest[a] <= 126)
		a++;
	for (b = 0; *(src + b) != '\0'; b++)
		*(dest + a + b) = *(src + b);
	return (dest);
}
/**
 * *_strcpy - prints n elements of an array
 *
 * Return: null
 * @src: array
 * @dest: array size
 */
char *_strcpy(char *dest, char *src)
{
	int c = 0;
	int d = 0;

	while (src[c] != '\0')
	{
		c++;
	}

	while (d <= c)
	{
		dest[d] = src[d];
		d++;
	}
	return (dest);
}
/**
 * _strcmp - takes in 2 strs and compares
 *
 * Return: difference of non-matching char's ascii val
 * @s1: str 1
 * @s2: str 2
 *
 */
int _strcmp(char *s1, char *s2)
{
	int s2Len = 0;
	int s1Len = 0;
	int shorter = 0;
	int index = 0;

	while (*s1 != 0)
	{
		s1++;
		s1Len++;
	}
	s1 -= s1Len;
	s1Len--;
	while (*s2 != 0)
	{
		s2++;
		s2Len++;
	}
	s2 -= s2Len;
	s2Len--;
	if (s2Len >= s1Len)
		shorter = s1Len;
	else
		shorter = s2Len;

	while (index <= shorter)
	{
		if (*(s1 + index) != *(s2 + index))
			return (*(s1 + index) - *(s2 + index));
		index++;
	}
	return (0);
}
/**
 * _strlen - returns length of str
 *
 * Return: length of str
 * @s: input
 */
int _strlen(char *s)
{
	int size = 0;

	for (; *s != '\0'; s++)
	{
		size++;
	}

	return (size);
}
