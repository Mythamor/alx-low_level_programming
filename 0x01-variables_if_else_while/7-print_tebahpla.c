#include <stdio.h>

/**
 *main - Entry point
 *
 *Declaration: print lower case alphabet in reverse  using putchar
 *
 *Return: Always 0 (Success)
 */

int main(void)

{
	int lower;

	for (lower = 'z'; lower >= 'a'; lower--)
	{
		putchar(lower);
	}
	
	putchar('\n');
	
	return (0);
}
