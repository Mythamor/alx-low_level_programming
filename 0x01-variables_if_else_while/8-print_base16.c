#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: print all the numbers of base 16 in lowercase
 *
 *Return: Always 0 (Success)
 */

int main(void)

{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
	{
			putchar(i + '0');/*prints 0-9*/
	}
			else
	{
				putchar(i - 10 + 'a');/*prints a-f*/
	}
	}
	putchar('\n');
	return (0);
}
