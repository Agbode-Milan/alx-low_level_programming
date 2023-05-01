#include "lists.h"

/**
 * pop_listint - Removes the first node of a linked list and returns its value
 * @head: pointer to the first element in the linked list
 *
 * Return: value of the first node that was removed, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

