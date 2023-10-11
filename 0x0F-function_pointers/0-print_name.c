#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - THis prints name using pointer to function
 * @name: we use this string to add
 * @f: Here is the pointer to function
 * Return: void
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
