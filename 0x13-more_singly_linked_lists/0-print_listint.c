#include "lists.h"

/**
 * print_listint - Function that prints all the elements of a listint_t list.
 * *@h: pointer to a linked list
 * Return: number of elements in the linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t countnodes = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		countnodes++;
	}
	return (countnodes);
}
