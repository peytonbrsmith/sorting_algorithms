#include "sort.h"
/**
 * selection_sort - the entrance for the selection sort algorithm
 * @array: the array to sort
 * @size: the size of the array
 *
 * Returns void
 */
void selection_sort(int *array, size_t size)
{
	unsigned long int i, j;
	int min_index;

	for (i = 0; i < (size - 1); i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
			{
				min_index = j;
			}
		}
		swap(&array[i], &array[min_index]);
		print_array(array, size);
	}
}
