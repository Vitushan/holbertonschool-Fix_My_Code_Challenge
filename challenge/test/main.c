#include <stdio.h>
#include <stdlib.h>
#include "../4-delete_dnodeint/lists.h"

int main(void)
{
    dlistint_t *head;

    head = NULL;

    /* Ajouter des nœuds */
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);

    printf("Liste initiale:\n");
    print_dlistint(head);

    /* Supprimer le nœud à l’index 2 */
    delete_dnodeint_at_index(&head, 2);
    printf("\nAprès suppression de l'index 2:\n");
    print_dlistint(head);

    /* Supprimer le premier nœud */
    delete_dnodeint_at_index(&head, 0);
    printf("\nAprès suppression de l'index 0:\n");
    print_dlistint(head);

    /* Supprimer le dernier nœud (nouvel index 2 après suppressions) */
    delete_dnodeint_at_index(&head, 2);
    printf("\nAprès suppression du dernier nœud:\n");
    print_dlistint(head);

    /* Libérer la mémoire */
    free_dlistint(head);

    return (0);
}
