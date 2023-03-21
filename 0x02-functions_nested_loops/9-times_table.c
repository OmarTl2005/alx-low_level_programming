#include "main.h"
/**
  *times_table - prints the 9 times table, starting with 0
  *
  *Return: always 0
  */

void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			_putchar(a * b);
			_putchar(',');
			_putchar(' ');
		}
	}
}
