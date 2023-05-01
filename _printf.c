#include "main.h"

typedef struct specifier
{
	char c;
	int (*handler)(va_list args);
} specifier_t;
specifier_t specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_int},
		{'i', print_int},
		{'b', print_binary},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_hexadecimal},
		{'X', print_HEXADECIMAL},
		{'S', print_string_S},
		{'\0', NULL}
	};
/**
 * _printf - a function that produces output according to a format.
 * @format: is a character string.
 * Return: number of characters printed.
 **/
int _printf(const char *format, ...)
{
	int count = 0;
	int i;
	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;

			for (i = 0; specifiers[i].c != '\0'; i++)
			{
				if  (*format == specifiers[i].c)
				{
					count += specifiers[i].handler(args);
					break;
				}
			}
			if (specifiers[i].c == '\0')
			{
				count += print_unknown(*format);
			}
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
