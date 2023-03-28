#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(const char *s);
int print_string(const char *s);
int assistFun(const char *format, va_list ptr);

#endif
