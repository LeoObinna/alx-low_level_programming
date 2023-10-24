#include "lists.h"

/**
 * add_nodeint - This adds a new node at the beginning of the listint_t list.
 * @head: Here is the pointer to the node address in the listint_t list.
 * @n: The integer data that should be inserted in the new node.
 *
 * Return: The pointer to the new node and if it fails, return  NULL,
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newest;

	newest = malloc(sizeof(listint_t));
	if (newest == NULL)
		return (NULL);

	newest->n = n;
	newest->next = *head;

	*head = newest;

	return (newest);
}
