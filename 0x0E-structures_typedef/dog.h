#ifndef DOG_H
#define DOG_H

/**
 * struct dog - This is the  dog's basic info
 * @name: The First part which is the name of the dog
 * @age: The Second part which is the age of the dog
 * @owner: The Third part which is the owner of the dog
 *
 * Description: this ia a Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - The needed typedef for struct dog task
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
