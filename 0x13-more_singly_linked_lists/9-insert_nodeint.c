#include "lists.h"

/**
 * insert_nodeint_at_index - This inserts a new node in the listint_t
 * linked list at a given position
 * @head: The pointer to the first node in the listint_t list
 * @idx: index where the new node is added
 * @n: The data to be inserted in the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int l;
	listint_t *newest;
	listint_t *temp = *head;

	newest = malloc(sizeof(listint_t));

	if (!newest || !head)
		return (NULL);
	newest->n = n;
	newest->next = NULL;

	if (idx == 0)
	{
		newest->next = *head;
		*head = newest;
		return (newest);
	}
	for (l = 0; temp && l < idx; l++)
	{
		if (l == idx - 1)
		{
			newest->next = temp->next;
			temp->next = newest;
			return (newest);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
