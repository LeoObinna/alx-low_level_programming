#include "main.h"
/**
 * _strlen - This function returns the length of a string
 * @s: the string
 * Return: length
 */
int _strlen(char *s)
{
	int longu = 0;

	while (*s != '\0')
	{
		longu++;
		s++;
	}
	return (longu);
}
