#include "sort.h"
/**
* selection_sort - sorts an array usinf selection sort algo
* @array: the array
* @size: array size
* REturn: void
*/
void selection_sort(int *array, size_t size)
{
	size_t sortedCount = 0;
	size_t minind;

	while (sortedCount < size - 1)
	{
		minind = minIndex(array, sortedCount, size);
		if (minind != sortedCount)
		{
			swap_inds(array, minind, sortedCount);
			print_array(array, size);
		}
		sortedCount++;
	}
}
/**
* minIndex - finds the min index in a section of an array
* @array : array
* @start: start
* @end: end
* Return: the index
*/
int minIndex(int *array, size_t start, size_t end)
{
	int minind = -1;
	size_t i;

	for (i = start; i < end; i++)
	{
		if (minind == -1)
			minind = i;
		if (array[i] < array[minind])
			minind = i;
	}
	return (minind);
}
