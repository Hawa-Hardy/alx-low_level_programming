#include "lists.h"

/**
 * add_node_end - Adds new node at the end of linked list
 *@head: double pointer to the head of the list
 *@str: string to be added
 *
 *Return: Address or the element,
 * or NULL of failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *last, *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
