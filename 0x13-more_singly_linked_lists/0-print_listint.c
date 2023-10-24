#include "lists.h"

/**
 * print_listint - This prints all the elements in the  listint_t list.
 * @h: Here we have a pointer to the head of listint_t list to print.
 *
 * Return: The number of nodes that should be in the listint_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t digits = 0;

	while (h)
	{
		printf("%d\n", h->n);
		digits++;
		h = h->next;
	}

	return (digits);
}
