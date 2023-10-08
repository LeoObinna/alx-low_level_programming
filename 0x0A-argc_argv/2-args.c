#include <stdio.h>
#include "main.h"
/**
 * main - This program prints all arguments it receives
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int l;

	for (l = 0; l < argc; l++)
	{
		printf("%s\n", argv[l]);
	}
	return (0);
}
