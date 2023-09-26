#include "sort.h"

#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending order  * using the Insertion sort algorithm.
 * @list: A pointer to a pointer to the head of the linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev, *next;

	if (!list || !(*list) || !((*list)->next))
		return;

	current = (*list)->next;

	while (current)
	{
		next = current->next;

		while (current->prev && current->n < current->prev->n)
		{
			prev = current->prev;

			if (prev->prev)
				prev->prev->next = current;
			else
				*list = current;

			if (current->next)
				current->next->prev = prev;

			prev->next = current->next;
			current->prev = prev->prev;
			current->next = prev;
			prev->prev = current;

			print_list(*list);
		}
		current = next;
	}
}
