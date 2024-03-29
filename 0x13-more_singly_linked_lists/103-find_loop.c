#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * find_listint_loop -  finds the loop in a linked list
 * @head: the pointer to the first element of the list
 * Return: address of node where loop starts, or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	while (slow && fast && fast->next)
{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
{
			slow = head;
			while (slow != fast)
{
				slow = slow->next;
				fast = fast->next;
}
			return (slow);
}
}
	return (NULL);
}
