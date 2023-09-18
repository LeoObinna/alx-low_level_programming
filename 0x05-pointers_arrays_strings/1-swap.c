#include "main.h"
/**
 * swap_int - This is a function that swaps the values of two integers.
 * @a: first parameter
 * @b: second parameter
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
