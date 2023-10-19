#include <stdlib.h>
#include "lists.h"

/**
 * list_len - This shows the number of elements of a linked list
 * @h: pointer to the linked list
 *
 * Return: number of elements of a list h
 */
size_t list_len(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
		h = h->next;
		l++;
	}
	return (l);
}
