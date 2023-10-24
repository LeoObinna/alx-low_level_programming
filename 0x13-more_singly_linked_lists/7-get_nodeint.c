#include "lists.h"

/**
 * get_nodeint_at_index - This returns the node to a certain index in a
 * listint_t list
 * @head: The first node in the listint_t list
 * @index: The index of the node to return
 *
 * Return: The pointer to the nth node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int l = 0;
	listint_t *tempo = head;

	while (tempo && l < index)
	{
		tempo = tempo->next;
		l++;
	}

	return (tempo ? tempo : NULL);
}
