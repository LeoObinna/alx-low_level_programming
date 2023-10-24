#include "lists.h"

/**
 * pop_listint - This deletes the head node of a listint_t list
 * @head: The pointer to the first element in the linked list
 *
 * Return: the head node’s data(n) that was deleted,or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tempo;
	int digit;

	if (!head || !*head)
		return (0);

	digit = (*head)->n;
	tempo = (*head)->next;
	free(*head);
	*head = tempo;

	return (digit);
}
