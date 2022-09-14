#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number in question
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int n;

	if (n < 0)
		n = (-1 * n);

	_putchar(n + '0');

	return (n);
}
