#include "lists.h"
/**
  * *get_dnodeint_at_index - gets the node at an index
  * @head: head of the list
  * @index: index to get
  * Return: pointer to the index
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	size_t count;

	for (count = 0; tmp; count++)
	{
		if (index == count)
			return (tmp);
		tmp = tmp->next;
	}

	return (NULL);
}
