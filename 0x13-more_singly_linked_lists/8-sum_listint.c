#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *sum_listint - prints the sum of all the data
  *@head: a ptr to the head ptr
  *Return: 0 if the list is empty
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
