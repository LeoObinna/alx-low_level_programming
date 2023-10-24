#include "lists.h"

/**
 * free_listint2 - It frees a listint_t list.
 * @head: The pointer to the address of the head of the listint_t
 * list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *tempo;

	if (head == NULL)
		return;

	while (*head)
	{
		tempo = (*head)->next;
		free(*head);
		*head = tempo;
	}

	head = NULL;
}
