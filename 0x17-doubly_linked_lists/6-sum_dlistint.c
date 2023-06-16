#include <stdlib.h>
#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
    int sum = 0;
    dlistint_t *current;

    current = head;
    while (current != NULL) {
        sum += current->n;
        current = current->next;
    }

    return sum;
}

