#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - This returns the length of a string
 * @s: The string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int r;

	r = 0;

	while (s[r] != '\0')
	{
		r++;
	}

	return (r);
}

/**
 * *_strcpy - This copies the string pointed to by src including
 * the terminating null byte (\0) to the buffer pointed to by dest
 * @dest: Here is the pointer to the buffer in which we copy the string
 * @src: Here is the string to be copied
 *
 * Return: Here is the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int den, e;

	den = 0;

	while (src[den] != '\0')
	{
		den++;
	}

	for (e = 0; e < den; e++)
	{
		dest[e] = src[e];
	}
	dest[e] = '\0';

	return (dest);
}

/**
 * new_dog - This creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: The pointer to the new dog (Success), otherwise NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int ken1, ken2;

	ken1 = _strlen(name);
	ken2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (ken1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (ken2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
