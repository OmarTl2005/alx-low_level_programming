#include <stdio.h>
/**
  *main - Entry point
  *
  *Return: always 0
  */

int main(void)
{
	int i;
	int j;

	for (j= i + 1; j < 100; j++)
	{
		if (i != j)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(',');
                	putchar(' ');
                	putchar(j / 10 + '0');
                	putchar(j % 10 + '0');
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
