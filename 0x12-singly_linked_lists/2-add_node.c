#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
  *add_node - adds a node to the beggining of a list
  *@head: the first node
  *@str: content
  *Return: the address of the new element, or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;


	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
