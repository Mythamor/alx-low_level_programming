#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: Always (0) Success
 */

int main(void)
{
	double num1 = 1, num2 = 2, nextNum, count;

	printf("%.0f, %.0f, ", num1, num2);

	for (count = 3; count <= 98; count++)
{
	nextNum = num1 + num2;
	printf("%.0f", nextNum);

	if (count < 98)
{
	printf(", ");
}

	num1 = num2;
	num2 = nextNum;
}
	printf("\n");
	return (0);
}
