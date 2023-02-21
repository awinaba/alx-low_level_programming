#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n : number for which the last digit is to be printed
 *
 * Return: Always @n
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n *= -1;
		n %= 10;
		n += '0';
		_putchar(n);
		return (n);
	}
	else
	{
		n %= 10;
		n += '0';
		_putchar(n);
		return (n);
	}
}
