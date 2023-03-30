#include "main.h"
#include <stdio.h>
#include <string.h>
/* betty style doc for function main goes there */
/**
 * leet - converts string to num
 * @ptr: pointer
 * Return: Always 0 (Success)
 */
char *leet(char *ptr)
{
	char *a = ptr;
	char leet_chars[] = "aAeEoOtTlL";
	char leet_nums[] = "4433007711";
	int i;

	while (*a)
	{
		i = 0;
		do {
			if (*a == leet_chars[i])
			{
				*a = leet_nums[i];
				break;
			}
			i++;
		} while (i < 12);
		a++;
	}
	return (ptr);
}
