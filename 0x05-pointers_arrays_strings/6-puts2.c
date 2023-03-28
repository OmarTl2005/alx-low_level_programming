#include "main.h"
/**
  *puts2 - prints every other character of a string,
  *starting with the first character, followed by a new line.
  *@str: var
  *Return: str
  */

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
