#include "lists.h"
/**
  *add_dnodeint - adds a new node at the beginning of a dlistint_t list.
  *@head: the head node
  *@n: var
  *Return: the address of the new element, or NULL if it failed
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (!temp)
	{
		return (NULL);
	}
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;
	if (!*head)
	{
		*head = temp;
		return (temp);
	}
	temp->next = *head;
	(*head)->prev = temp;
	*head = temp;

	return (temp);
}
