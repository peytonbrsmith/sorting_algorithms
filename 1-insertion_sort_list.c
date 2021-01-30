#include "sort.h"
/**
 * insertion_sort_list - the entrance of the insertion sort algorithm
 * @array: the array to sort
 * @size: the size of the array
 *
 * Returns void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *previous, *current;

	current = (*list)->next;
	while (current)
	{
		previous = current->prev;
		if (previous->n > current->n)
		{
			previous->next = current->next;
			current->next = previous;
			current->prev = previous->prev;
			previous->prev = current;
			print_list(*list);
		}
		current = current->next;
	}
}

int check_listsort(listint_t **list)
{
	listint_t *current = (*list)->next;

	while (current)
	{
		if (current->n < )
		current = current->next;
	}
}
