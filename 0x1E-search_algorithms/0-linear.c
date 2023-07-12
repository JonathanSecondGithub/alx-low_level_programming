#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array of integers
 * @array : function that searches for a value in an array of integers
 * @size : number of elements in array
 * @value : value to search for
 * Return: first index where value is located
*/
int linear_search(int *array, size_t size, int value)
{
	long unsigned int counter = 0;

	if (array == NULL)
		return (-1);
	while (counter < size)
	{
		if (array[counter] == value)
			break;
		printf("Value checked array[%lu] = [%d]",counter,array[counter]);
		printf("\n");
		counter++;
	}
	return (counter);
}
