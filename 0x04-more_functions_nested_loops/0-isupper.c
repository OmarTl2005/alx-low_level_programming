#include "main.h"
/**
  *_isupper - checks for uppercase chaaracter
  *@c: the character to check
  *Return: 1 if upper 0 if lower
  */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
