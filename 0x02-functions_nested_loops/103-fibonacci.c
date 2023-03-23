#include <stdio.h>

/**
 * main - print Fibonacci sequence whose values do not exceed 4000000,n r even
 * Return: Always(0) Success
 */

int main(void)
{
	int num1 = 1, num2 = 2, nextNum, sum = 2;

	while (num1 + num2 <= 4000000)
{
	nextNum = num1 + num2;
		if (nextNum % 2 == 0)
{
			sum += nextNum;
}
	num1 = num2;
	num2 = nextNum;
}
	printf("%d\n", sum);
	return (0);
}
