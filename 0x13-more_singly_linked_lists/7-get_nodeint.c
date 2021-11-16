#include "lists.h"

/**
 * *get_nodeint_at_index - function that returns the nth node of a linked list
 * *@head: pointer to a linked list
 * @index: index of the node to search for.
 * Return: Node indexed or null if it does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	for (; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
