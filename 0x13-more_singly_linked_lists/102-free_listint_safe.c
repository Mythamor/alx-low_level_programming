#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _free_listint_safe -  free lists with a loop
 * @head- double pointer to the first node of the list
 * Return:the size of the list that was free’d
 */

size_t _free_listint_safe(listint_t **head)
{
	size_t count = 0;
	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
{
		next = current->next;
		free(current);
		count++;

		if (next <= current)
		break;

		current = next;
}

	*head = NULL;
	return (count);
}
