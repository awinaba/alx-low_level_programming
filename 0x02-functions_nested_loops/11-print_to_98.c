#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n : number
 *
 * Return : n t0 98
 */

void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}

	if (n == 98)
		printf("%d", n);

	_putchar('\n');
}
