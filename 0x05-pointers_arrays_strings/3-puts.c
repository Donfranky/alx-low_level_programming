#include "main.h"

/**
 * _puts - writes a function that prints a string, followed by a line
 * @str: input string
 * return:void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
_putchar('\n');
return;
}
