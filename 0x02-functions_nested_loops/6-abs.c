#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @i : integer
 *
 * Return: Always 0
 */

int _abs(int i)
{
	if (i < 0)
	{
		i *= -1;
		return (i);
	}
	else
	{
		return (i);
	}
}
