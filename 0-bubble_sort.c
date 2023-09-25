#include "sort.h"


/**
 * bubble_sort - sorts an array using bubble sort
 *
 * @array: the array to be sorted
 * @size: the number of elements in array
*/

void bubble_sort(int *array, size_t size)
{
	size_t iteration;
	size_t index;
	size_t temp_var;

	if (!array || size < 2)
	{
		return;
	}

	for (iteration = 0; iteration < size - 1; iteration++)
	{
		for (index = 0; index < size - 1; index++)
		{
			if (array[index] > array[index + 1])
			{
				temp_var = array[index];
				array[index] = array[index + 1];
				array[index + 1] = temp_var;
				print_array(array, size);
			}

		}
	}
}
