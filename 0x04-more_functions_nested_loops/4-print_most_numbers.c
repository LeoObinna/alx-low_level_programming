#include "main.h"
/**
 * print_most_numbers - this task has a function that prints numbers except 2&4
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
			putchar(i + '0');
	}
	putchar('\n');
}
