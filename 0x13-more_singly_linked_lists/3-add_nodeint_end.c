#include "lists.h"

/**
 * add_nodeint_end - This adds a new node at the end of a listint_t list.
 * @head: The pointer to the address in the first node of the listint_t list.
 * @n: The integer for the new node that should be inserted.
 *
 * Return: If the pointer to the new node fails, return NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newest;
	listint_t *final;

	newest = malloc(sizeof(listint_t));
	if (newest == NULL)
		return (NULL);

	newest->n = n;
	newest->next = NULL;

	if (*head == NULL)
		*head = newest;

	else
	{
		final = *head;
		while (final->next != NULL)
			final = final->next;
		final->next = newest;
	}

	return (newest);
}
