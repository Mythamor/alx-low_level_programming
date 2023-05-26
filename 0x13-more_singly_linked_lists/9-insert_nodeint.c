#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head:points to the first elemst of the list
 * @idx:new index
 * @n:new data
 * Return: data at new index
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
{
		return (NULL);
}

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
}

	current = *head;
	for (i = 0; i < (idx - 1) && current != NULL; i++)
{
		current = current->next;
}

		if (current == NULL)
{
			free(new_node);
			return (NULL);
}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
