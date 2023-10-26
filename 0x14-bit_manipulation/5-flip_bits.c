#include "main.h"

/**
 * flip_bits -  function that returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int l, countbit = 0;
	unsigned long int present;
	unsigned long int entire = n ^ m;

	for (l = 63; l >= 0; l--)
	{
		present = entire >> l;
		if (present & 1)
			countbit++;
	}

	return (countbit);
}
