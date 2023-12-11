#include "main.h"
/**
 * _isalpha - This function checks for alphabetic character
 * @c: the character that has to be checked
 * Return: 1 if c is a letter, 0 if it is not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
