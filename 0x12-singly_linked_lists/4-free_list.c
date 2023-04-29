#include "lists.h"

/**
 * free_list - Frees a linked list
 * @head: Pointer to the head of the linked list to be freed
 *
 * This function frees all the nodes in a linked list by iterating through
 * the list and freeing the memory for each node and its associated string.
 *
 * @head: The head of the linked list to be freed
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{

		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

