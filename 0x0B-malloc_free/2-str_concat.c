#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: variable of type char
 * @s2: second variable of type char
 * Return: point to a newly allocated space in memory which contains the
 * contents of s1, followed by the contents of s2, and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	size_t i = 0, j = 0;
	size_t s1_len, s2_len;
	char *ptr;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	ptr = (char *) malloc(s1_len + s2_len + 1);
	if (!ptr)
	{
		return (NULL);
	}
	while (i < s1_len)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (j < s2_len)
	{
		ptr[s1_len + j] = s2[j];
		j++;
	}
	ptr[s1_len + s2_len] = '\0';
	return (ptr);
}
