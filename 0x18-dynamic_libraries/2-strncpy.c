#include "main.h"
/**
 * _strncpy - This function copies a string
 * @dest: input data
 * @src: input data
 * @n: input data
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int s = 0;

	while (s < n && src[s] != '\0')
	{
		dest[s] = src[s];
		s++;
	}
	while (s < n)
	{
		dest[s] = '\0';
		s++;
	}
	return (dest);
}
