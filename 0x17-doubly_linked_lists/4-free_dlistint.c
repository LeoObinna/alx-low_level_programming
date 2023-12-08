#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: head of the list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((next_node = head) != NULL)
	{
		head = head->next;
		free(next_node);
	}
}
