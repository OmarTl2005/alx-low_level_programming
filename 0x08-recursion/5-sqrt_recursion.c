#include "main.h"
/* betty style doc for function main goes there */
/**
 * sqrt_helper-  square root helper function.
 * @n: numbr
 * @i: incremental variable
 * Return: returns the square root.
 */
int sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_helper(n, i + 1));
}
/* betty style doc for function main goes there */
/**
 * _sqrt_recursion-  returns the natural sqrt of n.
 * @n: number
 * Return: returns the square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 0));
}
