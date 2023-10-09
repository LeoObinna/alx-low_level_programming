#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - to check if a string contains a non-digit char
 * @s: The string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int q = 0;

	while (s[q])
	{
		if (s[q] < '0' || s[q] > '9')
			return (0);
		q++;
	}
	return (1);
}

/**
 * _strlen - It returns the length of a string
 * @s: the string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int o = 0;

	while (s[o] != '\0')
	{
		o++;
	}
	return (o);
}

/**
 * errors - this handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - THis multiplies two positive numbers
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int pam1, pam2, pam, e, lift, digit1, digit2, *outcome, r = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	pam1 = _strlen(s1);
	pam2 = _strlen(s2);
	pam = pam1 + pam2 + 1;
	outcome = malloc(sizeof(int) * pam);
	if (!outcome)
		return (1);
	for (e = 0; e <= pam1 + pam2; e++)
		outcome[e] = 0;
	for (pam1 = pam1 - 1; pam1 >= 0; pam1--)
	{
		digit1 = s1[pam1] - '0';
		lift = 0;
		for (pam2 = _strlen(s2) - 1; pam2 >= 0; pam2--)
		{
			digit2 = s2[pam2] - '0';
			lift += outcome[pam1 + pam2 + 1] + (digit1 * digit2);
			outcome[pam1 + pam2 + 1] = lift % 10;
			lift /= 10;
		}
		if (lift > 0)
			outcome[pam1 + pam2 + 1] += lift;
	}
	for (e = 0; e < pam - 1; e++)
	{
		if (outcome[e])
			r = 1;
		if (r)
			_putchar(outcome[e] + '0');
	}
	if (!r)
		_putchar('0');
	_putchar('\n');
	free(outcome);
	return (0);
}
