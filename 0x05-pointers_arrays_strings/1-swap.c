#include "main.h"

/**
 * swap_int - value swap
 * @a: first int
 * @b: second int
 * Return: ints
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
