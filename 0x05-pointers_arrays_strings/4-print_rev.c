#include "main.h"

/**
 * print_rev - reverse
 * @s: str input
 * Return: reversed string
 */
void print_rev(char *s)
{
	int forerunner = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		forerunner++;
	}

	for (n = (forerunner - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
