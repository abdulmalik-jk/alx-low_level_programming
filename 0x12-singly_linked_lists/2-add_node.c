#include "lists.h"
#include <string.h>

/**
 * add_node - add node to head of alinked list
 * @head: poiter to head node
 * @str: pointer to string
 *
 * Return: pointer to new head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	char *str_dup;

	int len;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	str_dup = strdup(str);

	if (str_dup == NULL)
	{
		free(new);
		return (NULL);
	}

	len = 0;
	while (str[len])
	{
		len++;
	}
	new->str = str_dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
