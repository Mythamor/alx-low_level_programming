#include <stdio.h>

/**
 *main - Entry point
 *
 *Declaration:  print 0123456789 using putchar
 *Return: Always 0 (Success)
 */

int main(void)

{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
