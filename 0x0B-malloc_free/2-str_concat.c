#include "main.h"
#include <stdlib.h>

/**
 * str_concat - This is the function that concatenates two strings.
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int h, bj;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	h = bj = 0;
	while (s1[h] != '\0')
		h++;
	while (s2[bj] != '\0')
		bj++;
	conct = malloc(sizeof(char) * (h + bj + 1));
	if (conct == NULL)
		return (NULL);
	h = bj = 0;
	while (s1[h] != '\0')
	{
		conct[h] = s1[h];
		h++;
	}
	while (s2[bj] != '\0')
	{
		conct[h] = s2[bj];
		h++, bj++;
	}
	conct[h] = '\0';
	return (conct);
}
