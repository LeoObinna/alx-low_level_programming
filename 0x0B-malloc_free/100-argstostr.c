#include "main.h"
#include <stdlib.h>

/**
 * argstostr - This function function that concatenates all the arguments of
 * your program
 * @ac:use int for input
 * @av: indicates double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int f, g, h = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (f = 0; f < ac; f++)
	{
		for (g = 0; av[f][g]; g++)
			l++;
	}
	l += ac;
	str = malloc(sizeof(char) * l + 1);

	if (str == NULL)
		return (NULL);
	for (f = 0; f < ac; f++)
	{
		for (g = 0; av[f][g]; g++)
		{
			str[h] = av[f][g];
			h++;
		}
		if (str[h] == '\0')
		{
			str[h++] = '\n';
		}
	}
	return (str);
}
