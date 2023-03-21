#include "main.h"
/**
  *print_sign - Prints sign of a number.
  *
  *@n: The character checked
  *
  *Return: 1 if positive, 0 if null and -1 if negative
  */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar(43);
	}
	else if (n == 0)
	{
		return (0);
		_putchar(48);
	}
	else
	{
		return (-1);
		_putchar(45);
	}
}
