#include "main.h"

/**
 * print_alphabet - prints the alphabets, in lowercase,
 * followed by a new line
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
