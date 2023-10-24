#include "lists.h"

/**
 * free_listint - This frees a listint_t list.
 * @head: This is the pointer that frees the head of the listint_t list.
 */
void free_listint(listint_t *head)
{
	listint_t *tempo;

	while (head)
	{
		tempo = head->next;
		free(head);
		head = tempo;
	}
}
