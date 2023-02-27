#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int n;

	for (n = 0; *str != '\0'; str++)
	{
		_putchar(*str);
		n++;
	}
}
