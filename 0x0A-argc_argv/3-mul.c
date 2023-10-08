#include <stdio.h>
#include "main.h"
/**
 * _atoi - This program converts a string to an integer
 * @s: The strings to be converted
 * Return: The int converted from the string
 */
int _atoi(char *s)
{
	int h, c, m, len, e, digit;

	h = 0;
	c = 0;
	m = 0;
	len = 0;
	e = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (h < len && e == 0)
	{
		if (s[h] == '-')
			++c;
		if (s[h] >= '0' && s[h] <= '9')
		{
			digit = s[h] - '0';
			if (c % 2)
				digit = -digit;
			m = m * 10 + digit;
			e = 1;
			if (s[h + 1] < '0' || s[h + 1] > '9')
				break;
			e = 0;
		}
		h++;
	}
	if (e == 0)
		return (0);
	return (m);
}
/**
 * main - This program multiplies two numbers
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, rum1, rum2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	rum1 = _atoi(argv[1]);
	rum2 = _atoi(argv[2]);
	result = rum1 * rum2;
	printf("%d\n", result);

	return (0);
}
