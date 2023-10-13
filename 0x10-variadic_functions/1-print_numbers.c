#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - It prints numbers, followed by a new line
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 * @...: A variable number of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lets;
	unsigned int guide;

	va_start(lets, n);

	for (guide = 0; guide < n; guide++)
	{
		printf("%d", va_arg(lets, int));

		if (guide != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(lets);
}
