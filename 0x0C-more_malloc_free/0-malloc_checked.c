#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size of memmory to be allocated
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *x;

	x = malloc(b);

	if (x == NULL)
		exit(98);
	else
		return (x);
}
