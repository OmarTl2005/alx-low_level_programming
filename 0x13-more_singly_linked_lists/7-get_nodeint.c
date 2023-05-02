#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *get_nodeint_at_index - returns the nth node of a list
  *@head: pointer to the head
  *@index: the index of the node
  *Return: NULL if a node doesn't exist
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
