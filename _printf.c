#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - Function of printf
 * @format: character string
 *
 * Description: Write output to stdout,
 * the standard output stream
 * Return: number of characters printed, excluding
 * the null byte used to end output to strings
 */

int _printf(const char *format, ...)
{
	int a, printed = 0, printed_char = 0;
	int flags, width, precision, size, buff_ind;
	va_list ptr;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(ptr, format);

	for (a = 0; format && format[a] !=  '\0'; a++)
	{
		if (format[a] != '%')
		{
			buffer[buff_ind++] = format[a];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			printd_char++;
			/* write(1, &format[a], 1); */
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &a);
			width = get_width(format, &a, ptr);
			size = get_size(format, &a);
			a++;

			printed = handle_print(format, &a, ptr, buffer,
					flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_char += printed;
		}
	}

	print_buffer(buffer, &buff_ind);

	va_end(ptr);

	return (printed_char);
}

/**
 * print_buffer - prints buffer contents if buffer exists
 * @buffer: an array consistinh of characters
 * @buff_ind: index that adds next character and represents the length
 */

void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}
