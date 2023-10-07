#include "main.h"
/**
 * _puts - This function prints a string to stdout.
 * @str: The string to be printed
 * _putchar should print a new line
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
