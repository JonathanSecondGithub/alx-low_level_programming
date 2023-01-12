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
	int **x, i = 0, j = 0;

	if (width < 0 ||  height < 0)
		return (NULL);

	x = (int **)malloc(sizeof(int *) * height);

	if (x == NULL)
	{
		free(x);
		return (NULL);
	}
	for (; i < height; i++)
	{
		x[i] = (int *)malloc(sizeof(int) * width);
		if (x[i] == NULL)
		{
			free(x);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (; j < width; j++)
			x[i][j] = 0;
	return (x);
	free(x);
}
