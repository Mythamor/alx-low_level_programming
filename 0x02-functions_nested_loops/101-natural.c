#include "main.h"
#include <stdio.h>

/*
 * main - Entry point
 * computes and prints the sum of all the multiples of 3 or 5 below 1024
 * Return: Always (0) on Success.
 */

int main(void)
{
	int i = 1;
	int sum = 0;

	while (i < 1024)
{
		if (i % 3 == 0 || i % 5 == 0)
{
			sum += i;
}
	i++;
}
	printf("%d\n", sum);
	return (0);
}
