#include <stdio.h>
#include <stdlib.h>

/**
 * main - This should prints its own opcodes
 * @argc: number of arguments involved
 * @argv: array of arguments involved
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, l;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (l = 0; l < bytes; l++)
	{
		if (l == bytes - 1)
		{
			printf("%02hhx\n", arr[l]);
			break;
		}
		printf("%02hhx ", arr[l]);
	}
	return (0);
}
