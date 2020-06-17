#include "sort.h"
/**
* insertion_sort_list - insertion_sort_list
* @list: list to treat
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *back, *tmp;

	if (!list || !(*list)->next)
		return;

	current = (*list)->next;
	while (current)
	{
		back = current;
		while (back->prev)
		{
			tmp = back->prev;
			if (back->n < tmp->n)
			{
				tmp->next = back->next;
				if (current->next)
					tmp->next->prev = tmp;
				back->prev = tmp->prev;
				if (tmp->prev)
					tmp->prev->next = back;
				else
					*list = back;
				tmp->prev = back;
				back->next = tmp;
				print_list(*list);
				continue;
			}
			back = back->prev;
		}
		current = current->next;
	}
}
