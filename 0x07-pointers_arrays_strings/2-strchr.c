#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: A pointer to the string to search.
 * @c: The character to search for.
 * Return: pointer char s: NULL if chracter not found.
 */

char *_strchr(char *s, char c)
{
	char *s1 = s - 1;

	do {
		s1++;
		if (*s1 == c)
			return (s1);
	} while (*s1 != '\0');

	return (0);
}
