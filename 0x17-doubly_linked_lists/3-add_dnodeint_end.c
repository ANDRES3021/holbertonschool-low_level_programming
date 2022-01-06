#include "lists.h"
/**
  * *add_dnodeint_end - add a node to the end of the list
  * @head: head of the list
  * @n: value to add to the l
  * Return: pointer to the element added
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *tmp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;

		if (*head == NULL)
		{
			new->prev = NULL;
			*head = new;
			return (new);
		}

		while (tmp->next)
		{
			tmp = tmp->next;
		}
		new->prev = tmp;
		tmp->next = new;
	}
	return (new);
}
