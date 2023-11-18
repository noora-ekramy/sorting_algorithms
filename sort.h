#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <ctype.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void swap_inds(int *array, int ind1, int ind2);
void selection_sort(int *array, size_t size);
int minIndex(int *array, size_t start, size_t end);
void shell_sort(int *array, size_t size);
void swap_nodes(listint_t **head, listint_t *first, listint_t *second);
void insertion_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

#endif /* SORT_H */
