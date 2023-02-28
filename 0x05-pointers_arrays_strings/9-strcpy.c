#include "main.h"

/**
 * _strcpy - copies the string pointed by src, to the buffer pointed to by dest
 * @dest: copy destination
 * @src: copy source
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int index, length;

	for (length = 0; src[length] != '\0'; length++)
	{
	}

	for (index = 0; index <= length; index++)
	{
		dest[index] = src[index];
	}

	return (dest);
}
