#include <stdio.h>
/**
  *main - Entry point
  *Description: 'this program prints all the alphabet exept q and e'
  *Return: always 0
  */

int main(void)
{
	int alpha = 97;

	while (alpha <= 122)
	{
		if (alpha == 101 || alpha == 113)
		{
			alpha++;
			continue;
		}
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
