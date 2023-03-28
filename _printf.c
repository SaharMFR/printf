#include "main.h"

/**
 * _printf - Produce output according to a format.
 * @format: character string.
 * Return: the number of characters printed (excluding
 * the null byte used to end output to strings).
 */

int _printf(const char *format, ...)
{
	int size;
	va_list ptr;

	if (format == NULL)
		return (-1);

	size = _strlen(format);
	if (size < 1)
		return (0);

	va_start(ptr, format);
	size = assistFun(format, ptr);

	va_end(ptr);

	return (size);
}
