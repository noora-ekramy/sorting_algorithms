#include "sort.h"

/**
 * insertion_sort_list - uses insertion sort to sort a list
 * @list: a pointer to a doubly linked list
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		tmp = current->prev;
		while (tmp != NULL && tmp->n > current->n)
		{
			swap_nodes(list, tmp, current);
			print_list(*list);
			tmp = current->prev;
		}
		current = current->next;
	}
}

/**
 * swap_nodes - swaps two adjacent nodes
 * @head: pointer to the head of the list
 * @first: first node to be swaped
 * @second: second node to be swaped
 * Return: nothing
 */
void swap_nodes(listint_t **head, listint_t *first, listint_t *second)
{
	if (!first || !second || first->next != second || second->prev != first)
		return;

	if (second->next)
		second->next->prev = first;

	if (first->prev)
	{
		first->prev->next = second;
	}
	else
	{
		second->prev = NULL;
		*head = second;
	}
	first->next = second->next;
	second->prev = first->prev;

	second->next = first;
	first->prev = second;
}
