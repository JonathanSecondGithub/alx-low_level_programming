#include "dog.h"
#include <stdlib.h>

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
	char *name1, *owner1;
	int namelen = 0, ownerlen = 0, i = 0;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[namelen])
		namelen++;

	while (owner[ownerlen])
		ownerlen++;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	name1 = malloc(namelen + 1);
	if (name1 == NULL)
		return (NULL);

	for (; i < namelen; i++)
		name1[i] = name[i];
	name1[i] = '\0';

	i = 0;

	owner1 = malloc(ownerlen + 1);
	if (owner1 == NULL)
		return (NULL);

	for (; i < ownerlen; i++)
		owner1[i] = owner[i];
	owner1[i] = '\0';

	new_dog->name = name1;
	new_dog->age = age;
	new_dog->owner = owner1;

	return (new_dog);
}
