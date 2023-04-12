#include <string.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *_strdup - returns a pointer to a newly allocated space in memory
  *@str: string
  *Return: always 0
  */

char *_strdup(char *str)
{
	size_t i = 0;
	size_t str_len;
	char *str_copy;

	if (str == NULL)
		return (NULL);

	str_len = strlen(str);
	str_copy = (char *) malloc(str_len + 1);
	if (str_copy == NULL)
		return (NULL);
	while (i <= str_len)
	{
		str_copy[i] = str[i];
		i++;
	}
	return (str_copy);
}
