#include "main.h"
/**
*_putchar - Writes a character to stdout
*@c: The character to write
*Return: On success, 1. On error, -1.
**/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
*print_char - Print a character
*@args: va_list argument containing the character to be printed
*Return: Number of characters printed (always 1)
**/
int print_char(va_list args)
{
	char c = va_arg(args, int);

	write(1, &c, 1);
	return (1);
}
}
