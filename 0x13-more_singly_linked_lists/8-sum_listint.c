#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t linked list
 * @head: The first node in the listint_t linked list
 *
 * Return: 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sums = 0;
	listint_t *tempo = head;

	while (tempo)
	{
		sums += tempo->n;
		tempo = tempo->next;
	}

	return (sums);
}
