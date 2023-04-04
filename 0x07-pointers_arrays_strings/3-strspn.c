#include "main.h"
/* betty style doc for function main goes there */
/**
 * _strspn-  function that gets the length of a prefix substring..
 * @accept:sub string pointer
 * @s : main string
 *Return:Returns the number of bytes in the intial of s containin only accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	char *p = s;

	while (*accept)
	{
		while (*p && *p != ' ' && *p != ',')
		{
			if (*p == *accept)
			{
				len++;
			}
			p++;
		}
		accept++;
		p = s;
	}
	return (len);
}
