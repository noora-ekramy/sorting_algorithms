#include "deck.h"
#include <stdlib.h>
int get_val(const char *value)
{
	if (strcmp(value, "Ace") == 0)
		return 1;
	else if (strcmp(value, "2") == 0)
		return 2;
	else if (strcmp(value, "3") == 0)
		return 3;
	else if (strcmp(value, "4") == 0)
		return 4;
	else if (strcmp(value, "5") == 0)
		return 5;
	else if (strcmp(value, "6") == 0)
		return 6;
	else if (strcmp(value, "7") == 0)
		return 7;
	else if (strcmp(value, "8") == 0)
		return 8;
	else if (strcmp(value, "9") == 0)
		return 9;
	else if (strcmp(value, "10") == 0)
		return 10;
	else if (strcmp(value, "Jack") == 0)
		return 11;
	else if (strcmp(value, "Queen") == 0)
		return 12;
	else if (strcmp(value, "King") == 0)
		return 13;
	return -1;
}
int compare_cards(const void *a, const void *b)
{
	const deck_node_t *node_a = *(const deck_node_t **)a;
	const deck_node_t *node_b = *(const deck_node_t **)b;

	if (node_a->card->kind != node_b->card->kind)
		return node_a->card->kind - node_b->card->kind;
	return get_val(node_a->card->value) - get_val(node_b->card->value);
}

void sort_deck(deck_node_t **deck)
{
	int count = 0, i;
	deck_node_t *current = *deck, **deck_array;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	deck_array = malloc(count * sizeof(deck_node_t *));
	if (deck_array == NULL)
	{
		return;
	}

	current = *deck;
	for (i = 0; i < count; i++)
	{
		deck_array[i] = current;
		current = current->next;
	}

	qsort(deck_array, count, sizeof(deck_node_t *), compare_cards);

	for (i = 0; i < count - 1; i++)
	{
		deck_array[i]->next = deck_array[i + 1];
		deck_array[i + 1]->prev = deck_array[i];
	}

	*deck = deck_array[0];

	deck_array[0]->prev = NULL;
	deck_array[count - 1]->next = NULL;

	free(deck_array);
}
