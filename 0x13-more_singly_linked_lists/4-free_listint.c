#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - a function that frees a list
 * @head: location of first element
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;


	while (current != NULL)
{
		next = current->next;
		free(current);
		current = next;
}

}
