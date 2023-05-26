#include <stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete data at the given index
 * @head:pointer to the first element
 * @index: position where data will be deleted
 * Return: 1 if SUCCESSFUL; -1 if FAILURE
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *current;
	listint_t *previous;
	unsigned int i;

	if (head == NULL || *head == NULL)
{
		return (-1);
}

	if (index == 0)
{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
}

	current = *head;
	previous = NULL;

	for (i = 0; i < index && current != NULL; i++)
{
	previous = current;
	current = current->next;
}

	if (current == NULL)
{
		return (-1);
}

	previous->next = current->next;
	free(current);
	return (1);
}
