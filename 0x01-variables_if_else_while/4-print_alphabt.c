#include <stdio.h>
/**
 * main - prints the alphabets in lowercase except e and q
 * Return: 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}
	putchar('\n');

	return (0);
}
