#include "main.h"
/**
  *swap_int - swaps the values of two integers.
  *@a: int
  *@b: int
  *Return: always 0
  */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
