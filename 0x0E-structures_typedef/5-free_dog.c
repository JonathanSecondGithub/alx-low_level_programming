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

    free(d);
}