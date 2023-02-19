#include <stdio.h>

/**
 * main - alphabet is in lower case, followed by a newline
 * return - Always 0 (Success)
 */

int main (void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{	
	putchar(c);
	}	
	putchar('\n');
	return (0);
}
