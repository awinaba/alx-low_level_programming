#include "main.h"

/**
 * _strchr - locate charater in a string
 * @s: char array
 * @c: charater to locate
 * Return: NULL if char is not found, or pointer to first occurrence of char
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*(s + 1) == c)
		{
			return (s + 1);
		}
		s++;
	}

	return (s + 1);
}
