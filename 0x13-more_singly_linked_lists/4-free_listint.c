#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to first node on the list
 */

void free_listint(listint_t *head)
{
	listint_t *c_node = head;
	listint_t *n_node;

	while (c_node != NULL)
	{
		n_node = c_node->next;

		free(c_node);

		c_node = n_node;
	}
}
