#include "main.h"
/**
 * _strncat - This function concatenate two strings using at most n bytes
 * from src
 * @dest: the required input
 * @src: the required input
 * @n: the required input
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int y;
	int z;

	y = 0;
	while (dest[y] != '\0')
	{
		y++;
	}
	z = 0;
	while (z < n && src[z] != '\0')
	{
		dest[y] = src[z];
		y++;
		z++;
	}
	dest[y] = '\0';
	return (dest);
}
