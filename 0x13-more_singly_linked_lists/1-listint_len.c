#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * listint_len - a function that returns the number of elements in a linked
 * @h: points to the first element
 *
 * Return: number of elements in a list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
{
		count++;
		h = h->next;
}
	return (count);
}
