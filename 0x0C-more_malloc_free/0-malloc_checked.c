#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *malloc_checked - allocates memory using malloc.
  *@b: var
  *Return: pointer to the allocated memory
  */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
