#include "main.h"
/* betty style doc for function main goes there */
/**
 * mover- helper function to compute palindrome
 * @s: string from begining
 * @a: string from end
 * Return: returns if s == a, 0 otherwise.
 */
int mover(char *s, char  *a)
{
	if (*s == '\0' || *a == '\0')
	{
		return (1);
	}
	if (*s == *a)
	{
		return (mover(s + 1, a - 1));
	}
	return (0);
}
/* betty style doc for function main goes there */
/**
 * is_palindrome- function to check is a number is palindrome
 * @s: string pointer
 * Return: 1 if palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	char *end = s;

	if (*s == '\0')
	{
		return (1);
	}
	
	while (*end)
	{
		end++;
	}
	end--;
	return mover(s, end);
}
