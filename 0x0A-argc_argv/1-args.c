#include <stdio.h>
#include <stdlib.h>
/**
  *main - Entry point
  *@argc: arguments counter
  *@argv: arguments vector
  *Return: laways 0
  */

int main(int argc, char *argv[] __attribute__((unused)))
{
	argc--;
	printf("%d\n", argc);
	return (0);
}
