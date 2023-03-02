#include "main.h"

/**
 * _strncpy -  copies a string
 * @dest: destination of copied string
 * @src: source of string to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	whiel (src[j] !='\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
