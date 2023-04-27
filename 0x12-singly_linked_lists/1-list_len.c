#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
  *list_len - number of elements in the list
  *@h: ptr
  *Return: num
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
