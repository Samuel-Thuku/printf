#include <stdio.h>
#include <stdlib.h>
#include "_main.h"
/**
 * _printf - a function that produces output according to a format.
 * @format: is a character string.
 * Return: number of characters printed.
 **/
int _printf(const char *format, ...)
{
	va_list args;
	int length = 0;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(args, format);

	length = printFormat(format, args);
	va_end(args);
	return (length);
}
