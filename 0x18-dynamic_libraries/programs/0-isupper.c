#include "main.h"
/**
 * _isupper - enquire if its uppercase letter
 * @c: char to make necesary enquiries
 *
 * Return: If uppercase return 0 or if not return 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
