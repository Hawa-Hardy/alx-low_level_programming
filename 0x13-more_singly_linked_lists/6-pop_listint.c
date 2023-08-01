#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the first element
 *
 * Return: head node's data that was deleted
 * or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *next_node;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	next_node = (*head)->next;
	free(*head);
	*head = next_node;

	return (data);
}
