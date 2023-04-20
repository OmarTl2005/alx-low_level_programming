#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  *print_strings - prints strs
  *@separator: separator
  *@n: num of par
  *Return: strings
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;
	char *s;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);

		printf("%s", s);
		if (s == NULL)
			printf("%s", "(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
