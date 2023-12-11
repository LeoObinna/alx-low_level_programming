#include "main.h"
/**
 *_memcpy - This function copies memory area
 *@dest: the memory where it is stored
 *@src: the memory where it is copied
 *@n: the number of bytes
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int c = 0;
	int d = n;

	for (; c < d; c++)
	{
		dest[c] = src[c];
		n--;
	}
	return (dest);
}
