#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function to allocate a 2 dimentional array,
 * each element being 0
 * @width:width of the array
 * @height:height of the array
 * Return:A poimter to a 2 dimentional array
 * NULL on failure or if height / width is 0
 */

int **alloc_grid(int width, int height)
{
	int *x, i = 0, j = 0;

	if (width < 0 ||  height < 0)
		return (NULL);

	x = malloc((width + height) * sizeof(int));

	for (; i < width; i++)
	{
		for (; j < height; j++)
			x[i] = 0;
	}
}
