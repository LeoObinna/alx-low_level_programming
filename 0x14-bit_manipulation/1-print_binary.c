#include "main.h"

/**
 * _pow - func calculates (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int digit;
	unsigned int l;

	digit = 1;
	for (l = 1; l <= power; l++)
		digit *= base;
	return (digit);
}

/**
 * print_binary - It prints a number in binary representation of a number
 * @n: The number to be print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int agent, check;
	char symbol;

	symbol = 0;
	agent = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (agent != 0)
	{
		check = n & agent;
		if (check == agent)
		{
			symbol = 1;
			_putchar('1');
		}
		else if (symbol == 1 || agent == 1)
		{
			_putchar('0');
		}
		agent >>= 1;
	}
}
