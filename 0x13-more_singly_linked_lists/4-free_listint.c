#include "lists.h"

/**
 * free_listint - Function that frees a listint_t list.
 * *@head: pointer to a linked list
 * Return: void
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
