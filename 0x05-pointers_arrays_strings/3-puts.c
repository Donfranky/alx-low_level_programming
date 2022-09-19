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
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
