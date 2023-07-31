#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to first node
 *
 * Return: n if head is not null and 0 otherwise
 */

int pop_listint(listint_t **head)
{
	listint_t *p = *head;
	listint_t *c;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	n = p->n;
	c = p->next;
	*head = c;
	free(p);

	return (n);
}
