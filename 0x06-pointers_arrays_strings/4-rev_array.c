#include "main.h"

/**
 * reverse_array - reverses array of interger
 * @a: interger
 * @n: interger element
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i, ki;

	for (i = 0; i < n; i++)
	{
		n--;
		ki = a[i];
		a[i] = a[n];
		a[n] = ki;
	}
}
