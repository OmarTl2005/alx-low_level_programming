#include "main.h"
/**
  *print_last_digit - Prints the last digit of a number
  *
  *@i: input as an integer
  *
  *Return: the value of the last digit
  */

int print_last_digit(int i)
{
	int l = i % 10;

	if (l < 0)
	{
		return (-l);
	}
	else
	{
		return (l);
	}
}
