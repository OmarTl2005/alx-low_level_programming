#include "main.h"
#include <stdio.h>
#include <string.h>
/* betty style doc for function main goes there */
/**
 * string_toupper- reverses an array
 * @a: pointer
 * Return: Always 0 (Success)
 */
char *string_toupper(char *a)
{
	char *ptr = a;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr = *ptr - 'a' + 'A';
		ptr++;
	}
	return (a);
}

