#include "main.h"

/**
 * print_rev - print a string
 * @s: pointer char
 */
void print_rev(char *s)
{
	int fcounter = 0;
	intni, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		fcounter++;
	}

	for (n = (fcounter - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
