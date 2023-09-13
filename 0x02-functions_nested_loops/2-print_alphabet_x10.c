#include "main.h"
/**
 * print_alphabet_x10 - Make alphabet  x10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char lowercase = 'a';
	int i;

	while (1 < 10)
	{
		for (i = 0; i < 10; i++)
		{
			_putchar(lowercase = 'a');
		}
		_putchar('\n');
	}
}
