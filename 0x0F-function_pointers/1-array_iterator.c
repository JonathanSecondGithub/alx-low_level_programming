#include<stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given
 *  as a parameter on each element of an array
 *  @array: pointer to an array
 *  @size: size of the array
 *  @action: function pointer
 *  Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	while (i < size)
	{
		(action)(array[i]);
		i++;
	}
	return (0);
}
