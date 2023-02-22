#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n : number for which the last digit is to be printed
 *
 * Return: Always last digit of @n
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n *= -1;

	last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1

	_putchar(last_digit + '0');

	return (last_digit);
}
