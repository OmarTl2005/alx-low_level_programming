#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
  *print_name - prints a name
  *@name: the name
  *@f: ptr to the fct
  *Return: 0
  */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
