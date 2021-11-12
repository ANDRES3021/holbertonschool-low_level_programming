#include "lists.h"
/**
 * list_len - returns the number of count in a linked list_t list.
 * @h: The linked list_t list.
 *
 * Return: count.
 */
size_t list_len(const list_t *h)
{
	size_t countnodos = 0;

	while (h)
	{
		countnodos++;
		h = h->next;
	}
	return (countnodos);
}
