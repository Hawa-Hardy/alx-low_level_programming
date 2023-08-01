#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node should be added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *current;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	current = *head;
	for (i = 0; current && i < idx - 1; i++)
		current = current->next;

	if (!current || !current->next) /*If index is out of range */
	{
		free(new);
		return (NULL);
	}

	new->next = current->next;
	current->next = new;

	return (new);
}
