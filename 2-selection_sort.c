#include "sort.h"

/**
 * selection_sort - sorts an array using selection sort
 *
 * @array: the array to be sorted
 * @size: the number of elements in array
*/

void selection_sort(int *array, size_t size)
{
	size_t iteration, index, min_index;
	int temp_var;

	if (!array || size < 2)
	{
		return;
	}

	for (iteration = 0; iteration < size - 1; iteration++)
	{
		min_index = iteration;

		for (index = iteration + 1; index < size; index++)
		{
			if (array[index] < array[min_index])
			{
				min_index = index;
			}
		}

		if (min_index != iteration)
		{
			temp_var = array[iteration];
			array[iteration] = array[min_index];
			array[min_index] = temp_var;

			print_array(array, size);
		}
	}
}
