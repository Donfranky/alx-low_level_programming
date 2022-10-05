#include "main.h"

/**
 * create_array - Creates an array of char, and
 * initializes it with a specific char.
 * @size: Size of the array
 * @c: Character to insert
 * Return: NULL if size is zero or if it fails.
 * pointer to array if everything is normal.
 */

char *create_array(unsigned int size, char c);
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc((size) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
