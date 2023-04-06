#include "main.h"
/* betty style doc for function main goes there */
/**
 * _pow_recursion-  raise to power.
 * @x: number
 * @y: power coefficient
 * Return: returns the power.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

