#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: first string to be added
 * @src: second string to be added
 * @n: number of bytes to use from src
 * Return: concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;

	for (; n != 0 && *src != '\0'; n--, src++)
	{
		*temp = *src;
		temp++;
	}
	for (; n != 0 && *temp != '\0'; n--, temp++)
		*temp = '\0';
	return (dest);
}
