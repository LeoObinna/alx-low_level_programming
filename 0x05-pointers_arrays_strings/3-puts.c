#include "main.h"
/**
 * _puts - This task is a function that prints a string, followed by a new line
 * @str: function parameter
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}
