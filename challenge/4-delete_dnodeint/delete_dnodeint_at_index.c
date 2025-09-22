int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *tmp;
    unsigned int i;

    if (!head || !*head)
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

    for (i = 0; tmp && i < index; i++)
        tmp = tmp->next;

    if (!tmp)
        return (-1);

    if (tmp->prev)
        tmp->prev->next = tmp->next;
    if (tmp->next)
        tmp->next->prev = tmp->prev;

    free(tmp);
    return (1);
}
