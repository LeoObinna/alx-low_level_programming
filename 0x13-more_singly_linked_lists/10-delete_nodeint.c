#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a
 * listint_t linked list.
 * @head: A pointer to the first node in the listint_t linked list.
 * @index: The index of the node to be delete.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempo = *head;
	listint_t *present = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tempo);
		return (1);
	}

	while (a < index - 1)
	{
		if (!tempo || !(tempo->next))
			return (-1);
		tempo = tempo->next;
		a++;
	}


	present = tempo->next;
	tempo->next = present->next;
	free(present);

	return (1);
}
