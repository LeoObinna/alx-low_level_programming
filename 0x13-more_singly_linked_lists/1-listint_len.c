#include "lists.h"
#include <stdio.h>

/**
 * listint_len - This returns the number of elements in the listint_t lists.
 * @h: Here we have a pointer to the typr of listint_t to pass over.
 *
 * Return: The required number of element in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t digits = 0;

	while (h)
	{
		digits++;
		h = h->next;
	}

	return (digits);
}
