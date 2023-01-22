#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function to free space allocated
 * @d: pointer to dog_t
 * Return: nothing
 */

void free_dog(dog_t *d)
{
    if (d == NULL)
        return;

    if (d->name != NULL)
        free(d->name);

    if (d->owner != NULL)
        free(d->owner);

    if (d->age > 0)
        free(d->age);
    free(d);
}