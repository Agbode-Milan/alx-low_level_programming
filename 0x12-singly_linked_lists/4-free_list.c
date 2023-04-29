#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: pointer to the head of the linked list to be freed
 */

void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		list_t *temp = head->next;
		free(head);
		head = temp;
	}
}

