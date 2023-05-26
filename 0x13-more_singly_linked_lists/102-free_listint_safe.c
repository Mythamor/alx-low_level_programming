#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe -  free lists with a loop
 * @h: double pointer to the first node of the list
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current = *h;
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

	*h = NULL;
	return (count);
}
