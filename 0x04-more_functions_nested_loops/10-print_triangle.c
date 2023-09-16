#include "main.h"

/**
 * print_triangle - this task has function that that prints a triangle
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (c = size - a; c >= 1; c--)
			{
				putchar(' ');
			}
		for (b = 1; b <= a; b++)
		{
			putchar('#');
		}
		putchar('\n');
		}
	}
}
