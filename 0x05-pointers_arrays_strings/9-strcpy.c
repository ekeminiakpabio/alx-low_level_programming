#include "main.h"

/**
 * char *_strcpy - copies the string pointed at
 * @dest: for copying to
 * @src: for copying from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
