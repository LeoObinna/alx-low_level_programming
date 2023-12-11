#include "main.h"
/**
 * _strcmp - This function compares string values
 * @s1: input data
 * @s2: input data
 * Return: s1[o] - s2[o]
 */
int _strcmp(char *s1, char *s2)
{
	int o = 0;

	while (s1[o] != '\0' && s2[o] != '\0')
	{
		if (s1[o] != s2[o])
		{
			return (s1[o] - s2[o]);
		}
		o++;
	}
	return (0);
}
