#include "lists.h"

/**
 *add_nodeint - returns the number of elements in a linked listint_t list.
 *@n: int n.
 *@head: The head of the linked list.
 *Return: count.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode != NULL)
	{
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;

		return (newnode);
	}
	else
	{
		return (NULL);
	}
}
