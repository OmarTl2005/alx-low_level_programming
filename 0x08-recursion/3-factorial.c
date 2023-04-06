#include "main.h"
/* betty style doc for function main goes there */
/**
 * factorial-  The factorial of a number.
 * @n: interger
 * Return: computes the factorial.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (1);
	return (n * factorial(n - 1));
}
