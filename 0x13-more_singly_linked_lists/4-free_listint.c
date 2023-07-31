#include "lists.h"

/**
 * free_listint - Frees a linked list of integers.
 * @head: Pointer to the first element in the list.
 *
 * Description: This function frees all nodes in the linked list.
 * Each node contains an integer value.
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head)
	{
		current_node = head->next;
		free(head);
		head = current_node;
	}
}
