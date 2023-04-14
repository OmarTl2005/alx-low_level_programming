#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: variable of type char
 * @s2: second variable of type char
 * @n: integer
 * Return: point to a newly allocated space in memory which contains the
 * contents of s1, followed by the contents of s2, and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0;
	unsigned int s1_len, s2_len;

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
	if (n >= s2_len)
	{
		n = s2_len;
	}
	ptr = (char *) malloc(s1_len + n + 1);
	if (!ptr)
	{
		return (NULL);
	}
	while (i < s1_len)
	{
		ptr[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		ptr[s1_len + i] = s2[i];
		i++;
	}
	ptr[s1_len + n] = '\0';
	return (ptr);
}
