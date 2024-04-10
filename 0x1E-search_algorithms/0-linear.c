#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm.
 *
 * @array: input array.
 * @size: size of the array.
 * @value: value to search in.
 * Return: Always EXIT_SUCCESS.
 */
int linear_search(int *array, size_t size, int value)
{
	int l;

	if (array == NULL)
		return (-1);

	for (l = 0; l < (int)size; l++)
	{
		printf("Value checked array[%u] = [%d]\n", l, array[l]);
		if (value == array[l])
			return (l);
	}
	return (-1);
}
