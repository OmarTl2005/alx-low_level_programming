#include "main.h"
/* betty style doc for function main goes there */
/**
 * _strstr-  searh a string for any set of bytes
 * @haystack:string1
 * @needle : string2
 *Return: a pointer to the beginning of the located substring, or NULL.
*/
char *_strstr(char *haystack, char *needle)
{
	char *beg_hay;
	char *p_need;

	while (*haystack != '\0')
	{
		beg_hay = haystack;
		p_need = needle;

		while (*haystack != '\0' && *p_need != '\0' && *haystack == *p_need)
		{
			haystack++;
			p_need++;
		}
		if (!*p_need)
			return (beg_hay);
		haystack = beg_hay + 1;
	}
	return (0);
}

