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

		if (next <= current)
			break;

		free(current);
		count++;
		current = next;
}

	if (current != NULL)
{
		(*h)->next = NULL;
		count++;
		while (next != current)
{
			next = current->next;
			free(current);
			count++;
			current = next;
}
		free(current);
}

	*h = NULL;
	return (count);
}
