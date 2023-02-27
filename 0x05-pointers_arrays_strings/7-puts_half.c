#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string for which length is to be determined
 * Return: length of a string
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
	{
		len++;
	}
	return (len);
}

/**
 * puts_half - prints the second half of a string followed by a new line
 * @str: string to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int index;
	int length = _strlen(str);

	if (length % 2 != 0)
	{
		index = (length - 1) / 2;
	}
	else
	{
		index = (length / 2);
	}

	while (index < length)
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
