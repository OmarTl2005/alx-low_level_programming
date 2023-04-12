#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
  *create_array - creates an array of chars,
  *and initializes it with a specific char.
  *@size: size of malloc
  *@c: var
  *Return: always 0
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ar = (char *) malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	if (!ar)
		return (NULL);
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
