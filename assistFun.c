#include "main.h"
/**
 * assistFun - Format the output.
 * @format: the ideal format (type string).
 * Return: the total size (string + variables).
 */
int assistFun(const char *format, va_list ptr)
{
	int size, i, varSize, c;
	char *str;

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
				varSize = print_string(str);
				i++;
			}
			else
				varSize = 0;

			size += varSize;
			continue;
		}
		_putchar(format[i]);
		size++;
	}
	return (size);
}
