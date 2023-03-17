#include <stdio.h>
/**
  *main -Entry point
  *Description: 'This program that prints the lowercase alphabet in reverse'
  *Return: always 0
  */

int main(void)
{
	int num;

	for (num = 122; num >= 97; num--)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
