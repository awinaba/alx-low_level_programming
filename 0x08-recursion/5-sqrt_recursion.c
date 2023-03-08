#include "main.h"

/**
 * guess_root - guesses through possible roots of @n starting from the smallest
 * @n: n
 * @root: root to test
 * Return: natural square root, -1 if not natural root
 */

int guess_root(int n, int root)
{
	if (root * root > n)
	{
		return (-1);
	}
	if (root * root == n)
	{
		return (root);
	}

	return (guess_root(n, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number for which sqaure is to be determined
 * Return: square root of @n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (guess_root(n, 0));
}
