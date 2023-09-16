#include "main.h"

/**
 * print_square - This task has a function that prints a square of size size
 * @size: size of the aquare
 * Retur: void
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size); j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
