#include "main.h"

/**
 * binary_to_uint - The function that converts a binary number
 * to an unsigned int.
 * @b: The pointer to a string containing a binary number
 *
 * Return: the unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int l;
	unsigned int digit;

	digit = 0;
	if (!b)
		return (0);
	for (l = 0; b[l] != '\0'; l++)
	{
		if (b[l] != '0' && b[l] != '1')
			return (0);
	}
	for (l = 0; b[l] != '\0'; l++)
	{
		digit <<= 1;
		if (b[l] == '1')
			digit += 1;
	}
	return (digit);
}
