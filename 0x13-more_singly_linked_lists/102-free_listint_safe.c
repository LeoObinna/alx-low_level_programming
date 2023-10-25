#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: Here is the pointer to the first node in the listint_t list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t pam = 0;
	int distinct;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		distinct = *h - (*h)->next;
		if (distinct > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			pam++;
		}
		else
		{
			free(*h);
			*h = NULL;
			pam++;
			break;
		}
	}

	*h = NULL;

	return (pam);
}
