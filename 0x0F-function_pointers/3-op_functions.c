#include <stdio.h>
#include "3-calc.h"

/**
  *op_add - adds a to b
  *@a: num1
  *@b: num2
  *Return: sum of a and b
  */

int op_add(int a, int b)
{
	return (a + b);
}
/**
  *op_sub - sub a and b
  *@a: num1
  *@b: num1
  *Return: a - b
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  *op_mul - multiplies
  *@a: num1
  *@b: num2
  *Return: a * b
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  *op_div - devises
  *@a: num1
  *@b: num2
  *Return: a / b
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
  *op_mod - reminder of a / b
  *@a: num1
  *@b: num2
  *Return: a % b
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
