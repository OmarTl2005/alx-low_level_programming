#include "main.h"
#include <stddef.h>
/* betty style doc for function main goes there */
/**
 * _strpbrk-  searh a string for any set of bytes
 * @accept:sub string pointer
 * @s : main string
 *Return: Returns a poninter to the byte in s that matches accept.
*/
char *_strpbrk(char *s, char *accept)
{
	char *acxept = accept;

	while (*s)
	{
		while (*acxept)
		{
			if (*s == *acxept)
			{
				return (s);
			}
			acxept++;
		}
		s++;
		acxept = accept;
	}
	return (NULL);
}
