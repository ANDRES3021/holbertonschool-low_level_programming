#include "lists.h"

/**
 * listint_len - Function that returns the number of elements in a linked list
 * *@h: pointer to a linked list
 * Return: number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t countnodes = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h)
	{
		h = h->next;
		countnodes++;
	}
	return (countnodes);
}
