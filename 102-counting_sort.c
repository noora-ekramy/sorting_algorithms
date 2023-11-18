#include "sort.h"

/**
 * counting_sort - Sorts an array of integers in ascending order
 * using the Counting sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 */
void counting_sort(int *array, size_t size)
{
	size_t x, index = 0;
	int *counting_array, max, i, sum = 0;

	if (size <= 1)
		return;
	max = array[0];
	for (x = 1; x < size; ++x)
	{
		if (array[x] > max)
		{
			max = array[x];
		}
	}
	counting_array = malloc((max + 1) * sizeof(int));
	if (counting_array == NULL)
		return;
	for (i = 0; i <= max; ++i)
	{
		counting_array[i] = 0;
	}
	for (x = 0; x < size; ++x)
	{
		counting_array[array[x]]++;
	}
	for (i = 0; i <= max; ++i)
	{
		sum += counting_array[i];
		printf("%i", sum);
		if (i != max)
			printf(", ");
		else
			printf("\n");
	}
	for (i = 0; i <= max; ++i)
		while (counting_array[i] > 0)
		{
			array[index++] = i;
			counting_array[i]--;
		}
	free(counting_array);
}
