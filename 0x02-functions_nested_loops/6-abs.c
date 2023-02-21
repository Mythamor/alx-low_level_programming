#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 * @n: integer argument
 * Return: Always 0
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);

	return (0);
}
