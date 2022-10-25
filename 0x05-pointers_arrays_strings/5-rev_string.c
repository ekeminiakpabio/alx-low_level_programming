#include "main.h"

/**
 * rev_string - reverses a string
 * @s: reversee
 * Return: string but I love it reversed
 */
void rev_string(char *s)
{
	char rev = s[0];
	int forerunner = 0;
	int i;

	while (s[forerunner] != '\0')
		forerunner++;

	for (i = 0; i < forerunner; i++)
	{
		forerunner--;
		rev = s[i];
		s[i] = s[forerunner];
		s[forerunner] = rev;
	}
}
