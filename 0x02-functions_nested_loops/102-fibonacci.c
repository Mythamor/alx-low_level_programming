#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Always(0) Success
 */


int main(void)
{
	long long int num1 = 1, num2 = 2, nextNum, count;

	printf("%d, %d, ", num1, num2);

	for (count = 3; count <= 50; count++)
{
	nextNum = num1 + num2;
	printf("%d, ", nextNum);
	num1 = num2;
	num2 = nextNum;
}

	printf("\n");

	return (0);
}
