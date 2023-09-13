#include "main.h"

/**
 * _isalpha - checks for alphabetical character
 * @c: The character to bee checked
 * Return: 1 for alphabetical character or 0 for anything else
 */

int _isalpha(int c)
{

	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
