#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string for wich length is to be determined
 * Return: length of a string
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; *str != '\0'; str++)
	{
		len++;
	}

	return (len);
}

/**
 * puts2 - prints every other character of a string foloowed by a new line
 * @str: string to be operated on
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' && i < _strlen(str); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
