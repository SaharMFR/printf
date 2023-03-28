#include "main.h"

/**
 * print_string - Print string.
 * @s: the string (char type string).
 * Return: the length.
 */

int print_string(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);

	return (i);
}
