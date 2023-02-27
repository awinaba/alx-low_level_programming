#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line
 * @a: array
 * @n: number of elements of the array to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;
	for (i = 0; i <= n; i++)
	{
		if (i == n)
		{
			printf("%d", a[i]);
		}
		printf("%d, ", a[i]);
	}
	_putchar('\n');
}