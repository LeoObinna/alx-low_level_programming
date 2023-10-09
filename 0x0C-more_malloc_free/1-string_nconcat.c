#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - This function concatenates n bytes of a string to another
 * string
 * @s1: The string to attach to
 * @s2: The string to connect from
 * @n: The number of bytes from s2 to connect to s1
 *
 * Return: The pointer to the resultant string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int u = 0, v = 0, pam1 = 0, pam2 = 0;

	while (s1 && s1[pam1])
		pam1++;
	while (s2 && s2[pam2])
		pam2++;

	if (n < pam2)
		s = malloc(sizeof(char) * (pam1 + n + 1));
	else
		s = malloc(sizeof(char) * (pam1 + pam2 + 1));

	if (!s)
		return (NULL);

	while (u < pam1)
	{
		s[u] = s1[u];
		u++;
	}

	while (n < pam2 && u < (pam1 + n))
		s[u++] = s2[v++];

	while (n >= pam2 && u < (pam1 + pam2))
		s[u++] = s2[v++];

	s[u] = '\0';

	return (s);
}
