#include <stdio.h>
#include "dog.h"

/**
 * new_dog - function to create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: nothing
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	float age1;
	char *name1, *owner1;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = name1;
	new_dog->age = age1;
	new_dog->owner = owner1;

	return (new_dog);
}
