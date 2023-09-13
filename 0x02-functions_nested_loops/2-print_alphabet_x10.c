#include "main.h"
/**
 * print_alphabet_x10 - Make alphabet  x10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char lowercase = 'a';
	int i, j;

	while (1 < 10)
	{
		for (i = 0; i < 10; i++)
		{
			for (j = 0; j < 26; j++)
			{
			_putchar(lowercase + j);
			}
		_putchar('\n');
		}
	}
}
