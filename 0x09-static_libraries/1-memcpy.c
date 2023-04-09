#include "main.h"
/* betty style doc for function main goes there */
/**
 * _memcpy- Similar to memcpy function, copies n bytes from memory area src src
 * @dest : copy destination
 * @src : source
 * @n: size of bytes to be copied
 * Return: returns pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	return (dest);
}
