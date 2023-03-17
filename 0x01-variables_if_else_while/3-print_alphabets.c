#include <stdio.h>
/**
  *main -Entry point
  *Description: 'this program prints alphabet lower and upper case'
  *Return: always 0
  */

int main(void)
{
	int low = 97;
	int up = 65;

	while (low <= 122)
	{
		putchar(low);
		low++;
	}
	while (up <= 90)
	{
		putchar(up);
		up++;
	}
	putchar('\n');
	return (0);
}
