#include "main.h"
/**
 * _atoi - This function converts a string into an integer.
 * @s: the string to be used.
 * Return: integer.
 */
int _atoi(char *s)
{
	int chng = 1, k = 0;
	unsigned int man = 0;

	while (!(s[k] <= '9' && s[k] >= '0') && s[k] != '\0')
	{
		if (s[k] == '-')
			chng *= -1;
		k++;
	}
	while (s[k] <= '9' && (s[k] >= '0' && s[k] != '\0'))
	{
		man = (man * 10) + (s[k] - '0');
		k++;
	}
	man *= chng;
	return (man);
}
