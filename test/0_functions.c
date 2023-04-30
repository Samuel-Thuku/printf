#include "main.h"

/**
 * print_char - Print a character
 * @args: va_list argument containing the character to be printed
 * Return: Number of characters printed (always 1)
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}

/**
 * print_unknown - Print an unknown specifier
 * @c: Specifier character
 * Return: Number of characters printed
 */
int print_unknown(char c)
{
	_putchar('%'); /* Print the '%' character */
	_putchar(c); /* Print the unknown specifier character */
	return (2); /* Return the number of characters printed (2) */
}


/**
 * print_string - Print a string
 * @args: va_list argument containing the string to be printed
 * Return: Number of characters printed
 */
int print_string(va_list args)
{
	char *s = va_arg(args, char *);
	int count = 0;

	if (s == NULL)
	{
		s = "(null)";
	}

	while (*s)
	{
		_putchar(*s);
		s++;
		count++;
	}
	return (count);
}


/**
 * print_percent - Print a percent character
 * @args: va_list argument (not used)
 * Return: Number of characters printed (always 1)
 */
int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
