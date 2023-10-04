#include "main.h"
#include <stdlib.h>

/**
 * create_array - This function creates an array of chars, and initialize it
 * with a specific char
 * @size: the size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array,NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int p;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (p = 0; p < size; p++)
		str[p] = c;
	return (str);
}
