#include "main.h"
#include <stdio.h>
#include <string.h>
/* betty style doc for function main goes there */
/**
 * reverse_array - reverses an array
 * @a: array
 * @n: size of array
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	n--;
	while (i < n)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		n--;
		i++;
	}

}
