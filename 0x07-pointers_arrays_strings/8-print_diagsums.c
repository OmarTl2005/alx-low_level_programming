#include "main.h"
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * print_diagsums- prints the sum of the diagonals of a 2d array
 * @a: array
 * @size: length of the array
 *Return: prints the sum of diagonal.
*/
void print_diagsums(int *a, int size)
{
	int n1 = 0, n2 = 0;
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == i)
			{
				n1 = n1 + *(a + i * size + j);
			}
			if (i == size - j - 1)
			{
				n2 = n2 + *(a + i * size + j);
			}
		}
	}
	printf("%d, %d\n", n1, n2);
}
