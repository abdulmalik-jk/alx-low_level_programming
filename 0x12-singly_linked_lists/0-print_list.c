#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the head of the node
 *
 * Return: size of
 */

size_t print_list(const list_t *h)
{
	int n = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] ");
			printf("(nil)\n");
		}
		else
		{
			printf("[%i] ", h->len);
			printf("%s\n ", h->str);
		}
		n++;
		h = h->next;
	}
	return (n);
}
