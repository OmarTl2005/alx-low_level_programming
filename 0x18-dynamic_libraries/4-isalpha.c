#include "main.h"
/**
  *_isalpha - Checks for alphabetic characters
  *
  *@c: The character
  *
  *Return: 1 if a letter (lowercase or uppercase), and 0 otherwise
  */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

