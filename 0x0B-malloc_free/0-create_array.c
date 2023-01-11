#include "main.h"
#include <stdlib.h>
/**
 * create_array - function to create an array of chars,
 * and initialize it with a specific char
 * @size: size of array to be created
 * @c: character to be initialized
 * Return:A pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	int i = 0;

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
