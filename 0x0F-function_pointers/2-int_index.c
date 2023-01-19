#include<stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: pointer to an array of functions
 * @size:  number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of the first element for which the
 *  cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int count = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size > 0)
	{
		while ((*cmp)(array[count]) == 0)
		{
			(*cmp)(array[count]);
			count++;
		}
		return (count);
	}

	if (count == size)
		return (-1);

	if (size <= 0)
		return (-1);

	return (-1);
}
