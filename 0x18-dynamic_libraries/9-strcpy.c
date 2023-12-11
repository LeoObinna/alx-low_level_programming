#include "main.h"
/**
 * char *_strcpy - This program copies the string pointed to by src
 * @dest: it should copy to
 * @src: it should copy from
 * Return: string value
 */
char *_strcpy(char *dest, char *src)
{
	int s = 0;
	int t = 0;

	while (*(src + s) != '\0')
	{
		s++;
	}
	for ( ; t < s ; t++)
	{
		dest[t] = src[t];
	}
	dest[s] = '\0';
	return (dest);
}
