#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
  *int_index - searches for int
  *@array: the src array
  *@size: size of the array
  *@cmp: pointer to the array
  *Return: no return
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
