#include "search_algos.h"

/**
 * print_array - function that prints array being searched for
 * @array : function that searches for a value in an array of integers
 * @left : first element
 * @right : last element
 * Return: nothing
*/
int print_array(int *array, int left, int right)
{
	int i;

	if (array == NULL || size == 0)
		return;

	printf("Searching in array: ");

	for (i = 0; i < size; i++)
	{
		if (i == 0)
			printf("%d", array[i]);
		else
			printf(", %d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search - function that searches for a value in an array of integers
 * @array : function that searches for a value in an array of integers
 * @size : number of elements in array
 * @value : value to search for
 * Return: first index where value is located
*/
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;

	print_array(&array[left], (right - left) + 1);

	while (left <= right)
	{
		int mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
