#include "main.h"

/**
 * _strncat - concatenator of strings
 * @dest: copied to
 * @src: copied from
 * @n: maximum byte
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, k;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (k = 0; k < n; k++)
	{
		dest[i + k] = src[k];
		if (src[k] == '\0')
			k = n;
	}

	return (dest);
}
