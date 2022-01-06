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
	size_t cont;

	for (cont = 0; tmp; cont++)
	{
		if (index == cont)
			return (tmp);
		tmp = tmp->next;
	}

	return (NULL);
}
