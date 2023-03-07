#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square
 * matrix of integers
 * @a: 2d int array
 * @size: size of array (square)
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum, measure;

	i = 0;
	sum = 0;
	measure = size * size;
	while (i < measure)
	{
		if (i % (size + 1) == 0)
			sum += a[i];
		i++;
	}
	printf("%d, ", sum);

	sum = 0;
	i = 0;
	while (i < measure)
	{
		if (i % (size -1) == 0 && i != (sizer - 1) && i != 0)
			sum += a[i];
		i++;
	}
	printf("%d\n", sum);
}
