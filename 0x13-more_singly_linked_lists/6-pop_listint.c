#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a linked list and returns the data(n)
 * @head: double pointer to the linked list start
 *
 * Return: deleted value - n
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if (head && *head)
	{
		current = *head;
		n = (**head).n;
		*head = (**head).next;
		free(current);
		return (n);
	}
	return (0);
}
