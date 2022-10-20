#include "main.h"
/**
 * print_last_digit - entry
 * @n: inter
 * Return: value
 */
int print_last_digit(int n)
{
	int rf = n % 10;

	if (rf < 0)
		rf *= -1;
	_putchar(rf + '0');

	return (0);
}
