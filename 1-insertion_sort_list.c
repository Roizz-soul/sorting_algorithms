#include "sort.h"
/**
  * insertion_sort_list - sorts a linked list using the insertion algorithm
  * @list: list to be sorted
  */
void insertion_sort_list(listint_t **list)
{
	listint_t *previus = NULL, *current = NULL, *tmp = NULL, *bigger = NULL;
	int wall = 0;

	if (!list || !*list)
		return;

	tmp = *list;
	while (tmp)
	{
		if (tmp->prev != NULL)
		{
			current = tmp;
			wall = 0;
			while (current && current->prev->n > current->n)
			{
				previus = current->prev;
				bigger = current->next;

				if (previus->prev)
					previus->prev->next = current;
				else
				{
					*list = current;
					wall = 1;
				}
				if (bigger)
					bigger->prev = previus;

				current->prev = previus->prev;
				current->next = previus;
				previus->prev = current;
				previus->next = bigger;
				print_list(*list);
				if (wall)
					break;
			}
		}
		tmp = tmp->next;
	}
}
