#include "main.h"

/**
 * _islower - checks for lowercase charater
 * @c : character to be checked
 *
 * Return: 1 if c is lowercase, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
