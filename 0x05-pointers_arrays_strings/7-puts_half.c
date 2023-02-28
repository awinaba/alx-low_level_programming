#include "main.h"

/**
 * puts_half - prints the second half of a string followed by a new line
 * @str: string to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int index;
	int n;
	int length;

	for (length = 0; str[length] != '\0'; length++)
	{

	}

	n = (length - 1) / 2;

	for (index = n + 1; str[index] != '\0'; index++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
