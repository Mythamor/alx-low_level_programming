#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: integer argument
 * Return: last digit of number
 */

int print_last_digit(int i)
{
i %= 10;
if (i < 0)
i *= -1;
i += 48;
_putchar(i);
return (i - '0');
}
