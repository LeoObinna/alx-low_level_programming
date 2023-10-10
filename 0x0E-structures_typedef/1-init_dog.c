#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - This is what will initialize the variable of type struct dog
 * @d: The pointer to struct dog that will be used to initialize
 * @name: The name of the dog  that is used to initialize
 * @age: The age of the dog that is used to initialize
 * @owner: The owner of the dog that will be used to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
