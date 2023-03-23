#include <stdio.h>

/**
 * main - print Fibonacci sequence whose values do not exceed 4000000,n r even
 * Return: Always(0) Success
 */


int main(void)
{
	long int num1 = 1, num2 = 2, nextNum, count;

	printf("%ld, %ld, ", num1, num2);

	for (count = 3; count <= 50; count++)
{
	nextNum = num1 + num2;
	if (nextNum < 4000000 || nextNum % 2 == 0)
{
	printf("%ld", nextNum);

	if (count < 32)
{
	printf(", ");
}
	num1 = num2;
	num2 = nextNum;
}
}
	printf("\n");

	return (0);
}
