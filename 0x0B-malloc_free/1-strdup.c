#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - This function function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *aaa;
	int j, s = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;
	aaa = malloc(sizeof(char) * (j + 1));
	if (aaa == NULL)
		return (NULL);
	for (s = 0; str[s]; s++)
		aaa[s] = str[s];
	return (aaa);
}
