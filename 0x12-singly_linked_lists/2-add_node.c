#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Here it will be adding a new node at the beginning of a list
 * @head: The double pointer to the original linked list
 * @str: The string to add in the node
 *
 * Return: the address of the new linked list, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *rol;
	int length = 0;

	rol = malloc(sizeof(list_t));
	if (rol == NULL)
		return (NULL);

	while (str[length])
		length++;

	rol->len = length;
	rol->next = *head;
	rol->str = strdup(str);
	*head = rol;
	return (rol);
}
