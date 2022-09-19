#include "main.h"

/**
 * _puts - writes a function that prints a string, followed by a line, to
 * stdout.
 *
 * @str: input string
 *
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_puts(str[i]);
	}
	_putchar('\n');
}
