#include "main.h"
/**
  *main -Entry point
  *
  *Return: always 0
  */

int main(void)
{
	void print_alphabet(void)
	{
		int i;
		for (i = 97; i <=122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
