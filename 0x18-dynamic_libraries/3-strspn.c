#include "main.h"
/**
 * _strspn - EThis is the functions entry point
 * @s: information
 * @accept: information
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int v = 0;
	int c;

	while (*s)
	{
		for (c = 0; accept[c]; c++)
		{
			if (*s == accept[c])
			{
				v++;
				break;
			}
			else if (accept[c + 1] == '\0')
				return (v);
		}
		s++;
	}
	return (v);
}
