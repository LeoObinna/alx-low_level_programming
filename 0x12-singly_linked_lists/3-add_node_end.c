#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Here it adds a new node at the end of a list_t list
 * @head: double pointer to the list_t list
 * @str: The string to add inside the new node
 *
 * Return: address of the double pointer, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *latest_node, *present_node;
	size_t l;

	latest_node = malloc(sizeof(list_t));
	if (latest_node == NULL)
		return (NULL);

	latest_node->str = strdup(str);

	for (l = 0; str[l]; l++)
		;

	latest_node->len = l;
	latest_node->next = NULL;
	present_node = *head;

	if (present_node == NULL)
	{
		*head = latest_node;
	}
	else
	{
		while (present_node->next != NULL)
			present_node = present_node->next;
		present_node->next = latest_node;
	}

	return (*head);
}
