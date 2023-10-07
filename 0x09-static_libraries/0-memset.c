#include "main.h"
/**
 * _memset - This program fills a block of memory with a specific value
 * @s: The starting address of memory to be filled
 * @b: the desired value
 * @n: The number of bytes to be changed
 * Return: change array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int f = 0;

	for (; n > 0; f++)
	{
		s[f] = b;
		n--;
	}
	return (s);
}
