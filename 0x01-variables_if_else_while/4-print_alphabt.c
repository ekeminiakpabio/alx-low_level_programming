#include <stdio.h>
/**
 * main - entry
 * Return 0
 */
int main(void)
{
	char ls;

	for (ls = 'a'; ls <= 'z'; ls++)
		putchar(ls);
	for (ls = 'A'; ls <= 'Z'; ls++)
		putchar(ls);

	putchar(\n);
	return (0);
}
