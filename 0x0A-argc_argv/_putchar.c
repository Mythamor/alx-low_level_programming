#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the char c to stdout
 * @c: the character to print
 * Return: 1 on Success
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
