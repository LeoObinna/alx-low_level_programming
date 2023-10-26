#include"main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: The number to check bits in
 * @index: index at which to check bit
 *
 * Return: value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int agent, inspect;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	agent = 1 << index;
	inspect = n & agent;
	if (inspect == agent)
		return (1);
	return (0);
}
