#include "main.h"

/**
 * factorial - returns th factorial of a given number
 * @n: the number for which the factorial is to be found
 * Return: -1 if n < 0, 1 if n == 0, otherwise factorial of @n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (n * factorial(n - 1));
}
