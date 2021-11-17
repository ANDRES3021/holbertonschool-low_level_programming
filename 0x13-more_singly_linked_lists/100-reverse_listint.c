#include <stdlib.h>
#include "lists.h"

/**
  * reverse_listint - reverses a listint_t linked list.
  * @head: head
  * Returns: a pointer to the first node of the reversed list.
  */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *tempo;
    tempo = *head;
    listint_t *prev = NULL;
    while (tempo != NULL)
    {
        tempo->next = prev;  
    }


}