#include "lists.h"
/**
 * print_list - Function that prints all the elements of a list_t list.
 * *@h: pointer to list
 * Return: Nodes number
 */
size_t print_list(const list_t *h)
{
	size_t countnodos = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		countnodos++;
		h = h->next;
	}
	return (countnodos);
}
