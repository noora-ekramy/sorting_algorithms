#include "sort.h"

/**
* bubble_sort - sorts an array
* @array: the array
* @size: array size
* REturn: void
*/
void bubble_sort(int *array, size_t size)
{
	size_t swapsCount = -1;
	size_t i;

	if (size < 2)
		return;
	while (swapsCount != 0)
	{
		swapsCount = 0;

		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swapsCount++;
				swap_inds(array, i, i + 1);
				print_array(array, size);
			}
		}
	}
}

/**
* swap_inds - sawaps tow indexes of array
* @array: the array
* @ind1: first index to swap
* @ind2: secound index to swap
* Return: void
*/
void swap_inds(int *array, int ind1, int ind2)
{
	int tmp;

	tmp = array[ind2];
	array[ind2] = array[ind1];
	array[ind1] = tmp;
}
