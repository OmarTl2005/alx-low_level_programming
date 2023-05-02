#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *free_listint - frees a list
  *@head: a ptr to the list that needs to be freed
  */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
