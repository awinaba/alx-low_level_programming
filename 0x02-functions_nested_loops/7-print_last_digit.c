#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n : number for which the last digit is to be printed
 *
 * Return: Always @n
 */

int print_last_digit(int n)
{
	n %= 10;
	_putchar(n + '0');
	return (n);
}
