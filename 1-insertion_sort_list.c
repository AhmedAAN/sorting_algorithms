#include "sort.h"
/**
 * bubble_sort - A insertion sort function
 * @list: The list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	current = (*list)->next;
	while (current != NULL)
	{
		listint_t *temp = current->next;
		listint_t *sorted = current->prev;

		while (sorted != NULL && sorted->n > current->n)
		{
			sorted->next = current->next;
			if (current->next != NULL)
				current->next->prev = sorted;
			current->prev = sorted->prev;
			current->next = sorted;
			if (sorted->prev != NULL)
				sorted->prev->next = current;
			else
				*list = current;
			sorted->prev = current;
			sorted = current->prev;
			print_list(*list);
		}
		current = temp;
	}
}
