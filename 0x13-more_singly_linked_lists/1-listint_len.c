#include "lists.h"

/**
 * listint_len - prints number of elements in a list
 * @h: pointer to head of list
 *
 * Return: number of elements inlist
 */

size_t listint_len(const listint_t *h)
{
	int n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
