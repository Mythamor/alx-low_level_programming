#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - add diagonal lines of a square matrix
 * @a: square matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;

	for (int i = 0; i < size; i++)
	{
	sum1 += *(a + i * size + i);

	sum2 += *(a + i * size + (size - i - 1))
	}

	printf("Sum of diagonal 1: %d\nSum of diagonal 2: %d\n", sum1, sum2);
}
