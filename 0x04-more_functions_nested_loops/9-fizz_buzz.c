#include <stdio.h>
/**
  *main - Entry point
  *
  *Return: always 0
  */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0 && num % 3 != 0)
		{
			if (num < 100)
			{
			printf("Buzz ");
			}
			else
			{
				printf("Buzz");
			}
		}
		else if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (num == 1)
		{
			printf("%d ", num);
		}
		else
		{
			printf("%d ", num);
		}
	}
	printf("\n");
	return (0);
}
