#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free a list
 * @head: pointer to the head pf ode
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
