#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add node to the end
 * @head: pointer to the start of the linked list
 * @n: value to add to node
 *
 * Return: new element
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));
		if (newNode == NULL)
{
			printf("Memory allocation failed\n");
			return (NULL);
}
	newNode->n = n;
	newNode->next = NULL;


	if (*head == NULL)
{
		*head = newNode;
}
	else
{
		listint_t *current = *head;

		while (current->next != NULL)
{
			current = current->next;
}
		current->next = newNode;
}

	return (newNode);
}
