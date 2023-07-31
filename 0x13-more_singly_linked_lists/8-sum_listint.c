#include "lists.h"

/**
 * sum_listint - sums all the data in a linked list
 * @head: poiter to the first node in the list
 *
 * Return: 0 if list is empty, otherwise sum of elements in list
 */

int sum_listint(listint_t *head)
{
	listint_t *p;
	unsigned int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	p = head;
	while (p)
	{
		sum = sum + p->n;
		p = p->next;
	}
	return (sum);
}
