#include <stdio.h>
/**
  *main - Entry point
  *Description: 'This program prints all numbers of base 10 starting from 0'
  *Return: always 0
  */

int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
