#include "sort.h"

/**
 * quick_sort - quick sorts an array
 * @array: a pointer to an array
 * @size: size of the pointer
 * Return: nothing
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	recur(array, 0, size - 1, size);
}
/**
 * partition - sets a value in an index in its right order
 * @array: array input to be sorted
 * @low: start of the array
 * @high: end of the array
 * @size: size of the array
 * Return: array with sorted index
*/
int partition(int *array, int low, int high, size_t size)
{
	int pivot;
	int i;
	int j;

	pivot  = array[high];
	i = low;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			swap_inds(array, i, j);
			i++;
		}
	}
	swap_inds(array, i, high);
	print_array(array, size);
	return (i);
}
/**
 * recur - recursively calls itself to order quicksort a list
 * @array: an array of numbers to be sorted
 * @low: lowest index on the list
 * @high: hightst index on the list
 * @size: size of the array
 * Return: nothing
*/
void recur(int *array, int low, int high, size_t size)
{
	int i;

	if (low < high)
	{
		i = partition(array, low, high, size);
		recur(array, low, i - 1, size);
		recur(array, i + 1, high, size);
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
