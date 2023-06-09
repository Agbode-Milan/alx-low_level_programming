#include "lists.h"

/**
 * listint_len - returns the number of elements or nodes in a linked lists
 * @h: A pointer to the head of the list.
 *
 * Return: number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}


