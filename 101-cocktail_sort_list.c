#include "sort.h"

/**
 * cocktail_sort_list - sorts a doubly linked list in cocktail sort
 * @list: a pointer to a doubly linked list
 * Return: nothing
*/
void cocktail_sort_list(listint_t **list)
{
	int is_sorted = -1;
	listint_t *current, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	while (is_sorted != 0)
	{
		current = (*list)->next;
		tmp = current->prev;
		while (current != NULL)
		{
			if (current->n < tmp->n)
			{
				swap_nodes(list, tmp, current);
				print_list(*list);
				is_sorted++;
				tmp = current->prev;
			}
			current = current->next;
			if (current)
				tmp = current->prev;
		}
		if (is_sorted == 0)
			break;
		is_sorted = 0;
		current = tmp->prev;
		while (current != NULL && tmp != NULL)
		{
			if (current->n > tmp->n)
			{
				swap_nodes(list, current, tmp);
				print_list(*list);
				is_sorted++;
				tmp = current->next;
			}
			current = current->prev;
			if (current)
				tmp = current->next;
		}
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
