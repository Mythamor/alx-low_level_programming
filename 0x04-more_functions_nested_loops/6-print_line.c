#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: number of times _ should be printed.
 */

void print_line(int n)
{
	int len = n;

	for (len = n; len > 0; len--)
		_putchar('_');

	_putchar('\n');
}
