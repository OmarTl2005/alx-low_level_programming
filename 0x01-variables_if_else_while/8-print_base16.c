#include <stdio.h>
/**
  *main -Entry point
  *Description: 'Prints all the numbers of base 16 in lowercase'
  *Return: always 0
  */

int main(void)
{
	int num;
	int lt;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	for (lt = 97; lt <= 102; lt++)
	{
		putchar(lt);
	}
	putchar('\n');
	return (0);
}
