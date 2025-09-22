#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete the node at index of a list
 * @head: pointer to pointer to head
 * @index: index of node to delete (0 = head)
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *tmp;
    unsigned int i = 0;

    if (head == NULL || *head == NULL)
        return (-1);

    tmp = *head;

    if (index == 0)
    {
        *head = tmp->next;
        if (*head)
            (*head)->prev = NULL;
        free(tmp);
        return (1);
    }

    while (tmp != NULL && i < index)
    {
        tmp = tmp->next;
        i++;
    }

    if (tmp == NULL)
        return (-1);

    if (tmp->prev)
        tmp->prev->next = tmp->next;
    if (tmp->next)
        tmp->next->prev = tmp->prev;

    free(tmp);
    return (1);
}
