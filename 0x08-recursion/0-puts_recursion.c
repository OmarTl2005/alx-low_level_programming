#include "main.h"
/* betty style doc for function main goes there */
/**
 * _puts_recursion-  function that locates a character in a string.
 * @s: string pointer
 * Return: prints a string using recursion.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
