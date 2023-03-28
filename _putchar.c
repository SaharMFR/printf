#include <unistd.h>
/**
 * _putchar - function
 * Description: write the character c to standard
 * output library to print it.
 * @c: the character to print.
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
