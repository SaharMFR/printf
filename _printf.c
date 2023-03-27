#include "main.h"

/**
 * _printf - Produce output according to a format.
 * @format: character string.
 * Return: the number of characters printed (excluding
 * the null byte used to end output to strings).
 */

int _printf(const char *format, ...)
{
	int size, i, varSize, c, j;
	va_list ptr;
	char *str;

	if (format == NULL)
		return (-1);

	for (size = 0; format[size] != '\0'; size++)
		;

	if (size < 1)
		return (0);

	va_start(ptr, format);

	size = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				varSize = 1;
			}
			else if (format[i + 1] == 'c')
			{
				c = va_arg(ptr, int);
				_putchar(c);
				varSize = 1;
				i++;
			}
			else if (format[i + 1] == 's')
			{
				str = va_arg(ptr, char*);

				for (j = 0; str[j] != '\0'; j++)
					_putchar(str[j]);

				varSize = j;
				i++;
			}
			else
			{
				varSize = 0;
			}

			size += varSize;
			continue;
		}

		_putchar(format[i]);
		size++;
	}

	va_end(ptr);

	return (size);
}
