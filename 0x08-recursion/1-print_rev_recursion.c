#include "main.h"
/* betty style doc for function main goes there */
/**
 * _print_rev_recursion-  prints a string in reverse order.
 * @s: string pointer
 * Return: prints a string using recursion.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
