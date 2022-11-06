#include "sort.h"
/**
  * bubble_sort - sorts using the bubble sort algorithm
  * @array: array to be sorted
  * @size: size of the array
  */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;

	for (i = 0; i < (size - 1); i++)
	{
		for (j = 0; j < (size - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
			else
				continue;

			print_array(array, size);
		}
	}
}
