#include "sort.h"
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

/**
 * bitonic_merge - Merge two subarrays in the specified order
 * @array: Array to be sorted
 * @low: Starting index of the first subarray
 * @cnt: Number of elements to be merged
 * @dir: Sorting direction (UP or DOWN)
 */
void bitonic_merge(int *array, size_t low, size_t cnt, int dir)
{
	if (cnt > 1)
	{
		size_t k = cnt / 2;
		size_t i;

		for (i = low; i < low + k; i++)
			if ((array[i] > array[i + k]) == dir)
				swap_inds(array, i, i + k);

		bitonic_merge(array, low, k, dir);
		bitonic_merge(array, low + k, k, dir);
	}
}

/**
 * bitonic_sort_recursive - Recursively sort a bitonic sequence
 * @array: Array to be sorted
 * @low: Starting index of the subarray to be sorted
 * @cnt: Number of elements to be sorted
 * @dir: Sorting direction (UP or DOWN)
 */
void bitonic_sort_recursive(int *array, size_t low, size_t cnt, int dir, size_t arr_size)
{
	if (cnt > 1)
	{
		size_t k = cnt / 2;

		if (dir >= 1)
		{
			printf("Merging [%i/%i] (UP):\n", cnt, arr_size);
			print_array(&array[low], cnt);
		}
		else
		{
			printf("Merging [%i/%i] (DOWN):\n", cnt, arr_size);
			print_array(&array[low], cnt);
		}

		bitonic_sort_recursive(array, low, k, UP, arr_size);
		bitonic_sort_recursive(array, low + k, k, DOWN, arr_size);

		bitonic_merge(array, low, cnt, dir);

		if (dir <= 0)
		{
			printf("Result [%i/%i] (DOWN):\n", cnt, arr_size);
			print_array(&array[low], cnt);
		}
		if (dir >= 1)
		{
			printf("Result [%i/%i] (UP):\n", cnt, arr_size);
			print_array(&array[low], cnt);
		}
	}
}

/**
 * bitonic_sort - Sort an array of integers using the Bitonic sort algorithm
 * @array: Array to be sorted
 * @size: Number of elements in the array
 */
void bitonic_sort(int *array, size_t size)
{
	if (array != NULL && size > 0)
	{
		bitonic_sort_recursive(array, 0, size, UP, size);
	}
}
