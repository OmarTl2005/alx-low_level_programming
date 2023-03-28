#include <stdio.h>
#include "main.h"
/**
  *print_array - prints n elements of an array
  *of integers, followed by a new line.
  *@a: a
  *@n: n
  *Return: a and n
  */

void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}
	printf("\n");
}
