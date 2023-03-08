#include "main.h"

/**
 * check_prime - checks whether a number is prime
 * @num: number to check
 * @divisor: divisor of @num
 * Return: if prime 1, if not 0, call function recursively
 */

int check_prime(int num, int divisor)
{
	if (num == divisor)
		return (1);
	if (num % divisor == 0)
		return (0);
	return (check_prime(num, divisor + 1));
}

/**
 * is_prime_number - determines whethera number is prime or not
 * @n: number to be checked
 * Return: 1 if @n is a prime number, otherwise 0
 */

int is_prime_number(int n);
{
	if (n == 2)
		return (1);
	if (n % 2 == 0 || n < 2)
		return (0);
	return (check_prime(n, 3));
}
