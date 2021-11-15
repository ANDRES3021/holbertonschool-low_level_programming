#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end of a listint_t list.
  * @head: The head of the linked list
  * @n: The value to add to the end of the linked list
  *
  * Return: address of the new element, or NULL if it failed.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *tempo;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	tempo = *head;

	while (tempo->next)
	{
		tempo = tempo->next;
	}

	tempo->next = newnode;

	return (newnode);
}
