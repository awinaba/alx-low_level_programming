#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first integer
 * @b: second integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *b, *ptr_c = &c;

	*b = *a;
	*a = *ptr_c;
}
