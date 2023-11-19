#include "sort.h"
/**
 * maxHeapify - Maintains the max heap property.
 * @array: The array to heapify.
 * @size: The size of the array for printing.
 * @idx: The index of the current root of the subtree.
 * @n: The size of the array to run.
 */
void maxHeapify(int *array, size_t size, int idx, size_t n)
{
	int largest = idx, left = 2 * idx + 1, right = 2 * idx + 2;

	if (left < (int)n && array[left] > array[largest])
		largest = left;

	if (right < (int)n && array[right] > array[largest])
		largest = right;

	if (largest != idx)
	{
		int temp = array[idx];
		array[idx] = array[largest];
		array[largest] = temp;

		print_array(array, size);
		maxHeapify(array, size, largest, n);
	}
}

/**
 * heap_sort - Sorts an array of integers in ascending order using Heap sort.
 * @array: The array to be sorted.
 * @size: The size of the array.
 **/
void heap_sort(int *array, size_t size)
{
	int i;

	if (array == NULL || size < 2)
		return;

	for (i = (size - 2) / 2; i >= 0; --i)
		maxHeapify(array, size, i, size);

	for (i = size - 1; i > 0; --i)
	{
		int temp = array[0];
		array[0] = array[i];
		array[i] = temp;

		print_array(array, size);
		maxHeapify(array, size, 0, i);
	}
}
