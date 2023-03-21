#include "main.h"
/**
  *times_table - prints the 9 times table, starting with 0
  *
  *Return: always 0
  */

void times_table(void)
{
	int a = 0;
	int b;

	while (a <= 9)
	{
		for (b = 0; b <= 9; b++)
		{
			_putchar(a * b);
			_putchar(',');
			_putchar(' ');
		}
		a++;
	}
	return (0);
}
