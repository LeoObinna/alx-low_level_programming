#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: list_t list to be freed.
 * Return: nothing.
 */
void free_list(list_t *head)
{
	list_t *present_node;

	while ((present_node = head) != NULL)
	{
		head = head->next;
		free(present_node->str);
		free(present_node);
	}
}
