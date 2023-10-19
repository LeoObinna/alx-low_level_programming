#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - This prints all the elements of a linked list.
 * @h: Here is our pointer to the list_t list to print.
 *
 * Return: the number of nodes printed in h.
 */
size_t print_list(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		l++;
		h = h->next;
	}

	return (l);
}
