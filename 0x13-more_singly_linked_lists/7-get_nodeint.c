#include "lists.h"
#include <stddef.h>

/**
 * get_nodeint_at_index - returns nth node of a linked list
 * @head: pointer to the start of linked list
 * @index: index of the node starting at 0
 *
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head && i < index; i++)
{
		head = head->next;
}
	if (head && i == index)
{
		return (head);
}
	return (NULL);
}
