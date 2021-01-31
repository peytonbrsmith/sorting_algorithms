#include "sort.h"
/**
 * quick_sort - the entrance for the quick sort algorithm
 * @array: the array to sort
 * @size: the size of the array
 *
 * Returns void
 */
void quick_sort(int *array, size_t size)
{
	unsigned long int i, j, min_index;

	for (i = 0; i < (size - 1); i++)
	{
		min_index = (size - 1);
		for (j = i; j < (size - 1); j++)
		{
			if (array[j] <= array[min_index])
			{
				min_index = j;
			}
		}
		if (min_index != i)
		{
			swap(&array[i], &array[min_index]);
			print_array(array, size);
		}
	}
}

/**
 * swap - swaps integers in an array
 * @first: 1st int
 * @second: 2nd int
 *
 * Returns void
 */
void swap(int *first, int *second)
{
	int temp = *first;
	*first = *second;
	*second = temp;
}
