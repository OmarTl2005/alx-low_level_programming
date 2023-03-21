#include "main.h"
/**
  *print_alphabet_x10 - print alphabet in lowercase 10 times.
  *
  *Return: always 0 (Success)
  */

void print_alphabet_x10(void)
{
	int i;
	int x10;

	for (x10 = 1; x10 <= 10; x10++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
