#include <stdlib.h>
#include "lists.h"
/**
  *sum_dlistint - something
  *@head: the head node
  *Return: sum
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
