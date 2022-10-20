#include "main.h"
/**
 * times_table -  learn to multiply
 * rail = row, cane = column, d = numbers
 * Return: multiplication table
 */
void times_table(void)
{
	int rail, cane, d;

	for (rail = 0; rail <= 9; rail++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (cane = 1; cane <= 9; cane++)
		{
			d = (rail * cane);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (cane < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
