#include "lists.h"
/**
  *add_dnodeint_end - adds a new node at the end of a dlistint_t list.
  *@head: the head node
  *@n: the data
  *Return: the address of the new element, or NULL if it failed
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (!temp)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;
	if (!*head)
	{
		temp->prev = NULL;
		*head = temp;
	}
	else
	{
		dlistint_t *node = *head;

		while (node->next != NULL)
		{
			node = node->next;
		}
		node->next = temp;
		temp->prev = node;
	}
	return (temp);
}
