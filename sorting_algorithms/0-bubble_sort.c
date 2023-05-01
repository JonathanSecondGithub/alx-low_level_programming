#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	int j = size - 1;
	int i = size - 1;
	int temp, x, y = 0;
	while (j < size - 1)
	{
		while (i > 0)
		{
			if (array[i] < array[i - 1])
			{
				temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;
			}
			i--;
			int k = 0;
			while (k < size - 1)
			{
				printf("%d, ", array[k]);
				k++;
			}

		}
		j++;
	}
}
