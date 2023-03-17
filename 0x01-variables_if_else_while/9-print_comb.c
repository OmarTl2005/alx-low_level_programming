#include <stdio.h>
/**
  *main - Entry point
  *Description: 'prints all possible combinations of single-digit numbers'
  *Return: always 0
  */

int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		if (num == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
