#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: a pointer to the memory area to be filled with the constant byte.
 * @b: constant byte
 * @n: first number of bytes
 * Return:char s
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
