#include <stdio.h>

/**
 * main - Entry point
 *
 *Description: Print alphabet in lower case except for q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
	{
			continue;
	}

	putchar(c);
	}

	putchar('\n');

	return (0);
}
