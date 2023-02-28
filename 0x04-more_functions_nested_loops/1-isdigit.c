#include "main.h"

/**
 * _isdigit - checks for a digit 0 through 9.
 * @c: parameter to be tested
 * Return: 1 if c is digit & 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}

	return (0);
}
