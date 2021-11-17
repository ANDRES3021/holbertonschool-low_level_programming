#include <stdlib.h>
#include "lists.h"

/**
	* reverse_listint - reverses a listint_t linked list.
	* @head: head
	* Return: a pointer to the first node of the reversed list.
	*/
listint_t *reverse_listint(listint_t **head)
{
		listint_t *move_head, *invert_link;

		move_head = *head;
		invert_link = NULL;
		while (*head)
		{
			(*head) = (*head)->next;
			move_head->next = invert_link;
			invert_link = move_head;
			move_head = *head;
		}
		(*head) = invert_link;
		return (*head);
}
