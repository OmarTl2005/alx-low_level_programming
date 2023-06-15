#include "lists.h"
/**
  *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
  *@head: the head node
  *@index: the index of the node, starting from 0
  *Return: the nth node , NULL if doesn't exist
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp;

	temp = head;
	for (i = 0; temp != NULL && i < index; i++)
	{
		temp = temp->next;
	}
	return (temp);
}
