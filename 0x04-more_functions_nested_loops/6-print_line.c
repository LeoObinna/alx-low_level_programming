#include "main.h"

/**
 * print_line - this task has a function that draws a straight line
 * @n: No of times
 * Return: Always 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar('_');
	}
	putchar('\n');
}
