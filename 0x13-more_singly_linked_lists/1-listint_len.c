#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *listint_len - the number of elements in the list
  *@h: pointer to the list
  *Return: number of elements
  */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
