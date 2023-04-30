#include "main.h"


/**
 * _putchar - Writes a character to stdout
 * @c: The character to write
 *
 * Return: On success, 1. On error, -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - Print a character
 * @args: va_list argument containing the character to be printed
 * Return: Number of characters printed (always 1)
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	write(1, &c, 1);
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
		write(1, s, 1);
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
	write(1, "%", 1);
	return (1);
}
