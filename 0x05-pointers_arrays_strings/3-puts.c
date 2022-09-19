#include "main.h"

/**
 * _puts - writes a function that prints a string, followed by a line
 * @str: input string
 * Description: puts a string
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
