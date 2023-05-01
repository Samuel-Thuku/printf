#include "main.h"

/**
  * print_string_S - Custom handler for printing
  *a string with non-printable characters
  * @args: Argument list
  *
  * Return: Number of characters printed
  */
int print_string_S(va_list args)
{
	char *str = va_arg(args, char *);
	int i, count = 0;

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');
			if (str[i] < 16)
				count += _putchar('0');
			count += print_HEX(str[i]);
		}
		else
		{
			count += _putchar(str[i]);
		}
	}

	return (count);
}

/* print_string_S helper function*/

/**
  * print_HEX - Prints hexadecimal representation of ASCII characters
  * @c: Character to print
  *
  * Return: Number of characters printed
  */
int print_HEX(char c)
{
	int count = 0;
	char hex[] = "0123456789ABCDEF";

	_putchar('\\');
	_putchar('x');
	_putchar(hex[c / 16]);
	_putchar(hex[c % 16]);
	count += 4;

	return (count);
}
