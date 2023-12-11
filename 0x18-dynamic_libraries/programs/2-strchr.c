#include "main.h"
/**
 * _strchr - this is the programs entry point
 * @s: input information
 * @c: input information
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int q = 0;

	for (; s[q] >= '\0'; q++)
	{
		if (s[q] == c)
			return (&s[q]);
	}
	return (0);
}
