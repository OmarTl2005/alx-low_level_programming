#include <stdio.h>
/**
  *main - Entry point
  * Description: 'This program will print the alphabet in lowercase'
  *Return: always 0
  */

int main(void)
{
	int num = 97;

	while (num <= 122)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
