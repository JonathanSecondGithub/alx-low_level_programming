#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function to initialize variable of type struct dog
 * @d: pointer to structer dog
 * @struct dog - pointer to dog structure
 * @name: variable for god age
 * @age: variable for age
 * @owner: variable for owner
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);

	d->name = name;
	d.age = age;
	d->owner = owner;
}
