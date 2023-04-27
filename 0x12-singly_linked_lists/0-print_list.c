#include <stddef.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *print_list - prints all the elements of list_t list.
  *@h: ptr
  *Return: number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
