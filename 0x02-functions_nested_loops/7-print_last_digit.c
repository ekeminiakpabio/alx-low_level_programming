#include "main.h"
/**
 * print_last_digit - entry
 * @r: inter
 * Return: value
 */
int print_last_digit(int r)
{
	int rf = r % 10;

	if (rf < 0)
		rf *= -1;
	_putchar(rf + '0');

	return (0);
}
