#include "lists.h"
#include <string.h>

/**
 * add_node_end - add node to the end of a linked list
 * @head: pointer to pointer to head node
 * @str: pointer to string
 *
 * Return: pinter to new head of list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *cpy;

	int len;

	list_t *new;

	list_t *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	cpy = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	len = 0;
	while (str[len])
		len++;
	new->str = cpy;
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (*head);
}
