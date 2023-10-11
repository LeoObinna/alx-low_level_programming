#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - This prints each array elem on a newl
 * @array: The array
 * @size: how many element to print
 * @action: This is the pointer to print in regular or hex
 * Return: empty
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int l;

	if (array == NULL || action == NULL)
		return;

	for (l = 0; l < size; l++)
	{
		action(array[l]);
	}
}
