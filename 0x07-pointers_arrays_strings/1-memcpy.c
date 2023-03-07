#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: a pointer to the memory location where the bytes are to be copied.
 * @src: pointer to memory location from where the bytes are to be copied.
 * @n: number of bytes to be copied.
 *
 * @Return: pointer to the memory area char @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest1 = dest;
	char *src1 = src;

	for (; n != 0; dest1++, n--, src1++)
		*dest1 = *src1;

	return (dest);
}
