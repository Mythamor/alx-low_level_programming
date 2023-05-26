#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints the linked list
 * @head: pointer to the first element of the list
 * Return: Number of nodes in the list. FAILUR = 98
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;

	while (current != NULL)
{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

	if (current <= current->next)
{
		printf("-> [%p] %d\n", (void *)current->next, current->next->n);
		break;
}
	current = current->next;
}
	return (count);
}
