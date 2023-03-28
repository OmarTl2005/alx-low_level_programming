#include "main.h"
/**
  *_puts2 - prints every other character of a string,
  *starting with the first character, followed by a new line.
  *@str: var
  *Return: str
  */

void _puts2(char *str)
{
	char *y = str;
	int i = 0;
	int t = 0;
	int o;

	while (*y != '\0')
	{
		y++;
		i++;
	}
	t = i - 1;

	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[0]);
		}
	}
	_putchar('\n');
}
