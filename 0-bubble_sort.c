#include "sort.h"


/**
 * bubble_sort - sorts an array using bubble sort
 * 
 * @array: the array to be sorted 
 * @size: the number of elements in array
*/


void bubble_sort(int *array, size_t size)
{
    size_t pass, index;
    int temp;
    int swapped;

    if (!array || size < 2)
        return;

    for (pass = 0; pass < size - 1; pass++)
    {
        swapped = 0; // Flag to track whether any swaps occurred in this pass

        for (index = 0; index < size - 1 - pass; index++)
        {
            if (array[index] > array[index + 1])
            {
                // Swap elements if they are out of order
                temp = array[index];
                array[index] = array[index + 1];
                array[index + 1] = temp;

                swapped = 1; // Set the flag to indicate a swap occurred
                print_array(array, size); // Print the array after the swap
            }
        }

        // If no swaps were made in this pass, the array is already sorted
        if (swapped == 0)
            break;
    }
}