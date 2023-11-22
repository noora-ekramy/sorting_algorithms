#include "sort.h"
/**
 * merge_sort - sorts an array of integers using merge sort
 * @array: a pointer to an array
 * @size: size of the array
 * Return: nothing
*/
void merge_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
		return;

	recursive_merge(array, 0, size - 1);
}
/**
 * recursive_merge - recursively mrege sorts an array
 * @array: a pointer to an array
 * @high: highest index
 * @low: lowest index
 * @size: size of array
 * Return: nothing
*/
void recursive_merge(int *array, int low, int high)
{
    int mid;

    if(low < high)
    {
        mid = (low + high) / 2;

        recursive_merge(array, low, mid);
        recursive_merge(array, mid + 1, high);

        merge(array, low, mid, high);
    }

}

void merge(int *array, int low, int mid, int high)
{
    int i = low, j = mid + 1, k = low;
    int b[100];

    while (i <= mid && j <= high)
    {
        if(array[i] < array[j])
            b[k++] = array[i++];
        else
            b[k++] = array[j++];
    }
    for (; i <= mid; i++)
        b[k++] = array[i++];
    for (; j <= high; j++)
        b[k++] = array[j++];

    for (i = low; i <= high; i++)
    {
        array[i] = b[i];
    }
}