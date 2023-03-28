#include "main.h"

/**
 * _strlen - Calculate the length of string.
 * @s: the string (type pointer).
 * Return: the length of the string.
 */

int _strlen(const char *s)
{
	int nChars;

	for (nChars = 0; s[nChars] != '\0'; nChars++)
		;

	return (nChars);
}
