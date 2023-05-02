#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  *print_listint - prints all the elements of listint_t list
  *@h: ptr to the list
  *Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
