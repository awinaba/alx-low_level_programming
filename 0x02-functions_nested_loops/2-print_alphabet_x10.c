#include "main"

/**
 * print_alphabet - prints 10 times the alphabet, in lowercase
 * followed by a new line
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char alphabet = 'a';
	int i = 0;

	while (i <= 9)
	{
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		i++;
		_putchar('\n');
	}
}
