#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: pointer to first element
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *tmp;

    while (head)
    {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}
