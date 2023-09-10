#include <stdio.h>
/**
 * main - This is the function that perform the task
 * Return: always 0
 */
int main(void)

{
	int a;

	for (a = 0; a < 10; a++)

	putchar(a + '0');
	if (a < 9)
	putchar(',');
	putchar(' ');
	putchar('\n');
	return (0);
}
