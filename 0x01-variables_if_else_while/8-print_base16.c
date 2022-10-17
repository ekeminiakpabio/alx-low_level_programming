#include <stdio.h>
/**
*main - hexadon
*Return: 0
*/

int main(void)
{
	int num;
	char na;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (na = 'a'; na <= 'f'; na++)
		putchar(na);

	putchar('\n');

	return (0);
}
