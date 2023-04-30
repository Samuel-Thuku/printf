#include "main.h"

/**
  * print_unsigned - Print an unsigned integer
  * @args: va_list argument containing integer to be printed
  *
  * Return: Number of characters printed
  */

int print_unsigned(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;

	count += print_unsigned_rec(num, 10, "0123456789");

	return (count);
}

/* Print unsigned helper function*/
/**
  * print_unsigned_rec - Prints an unsigned integer recursively
  * @n: Unsigned integer to print
  * @base: Base to print in
  * @digits: String of digits to use
  *
  * Return: Number of digits printed
  */

int print_unsigned_rec(unsigned int n, unsigned int base, char *digits)
{
	int count = 0;

	if (n / base != 0)
		count += print_unsigned_rec(n / base, base, digits);

	count += _putchar(digits[n % base]);

	return (count);
}

/**
  * print_octal - Print an unsigned integer in octal
  * @args: va_list argument containing integer to be printed
  *
  * Return: Number of character printed
  */

int print_octal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;

	count += print_unsigned_rec(num, 8, "01234567");

	return (count);
}

/**
  * print_hexadecimal - Print an unsigned integer in hexadecimal
  * @args: va_list argument containing integer to be printed
  *
  * Return: Number of character to be printed
  */

int print_hexadecimal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;

	count += print_unsigned_rec(num, 16, "0123456789abcdef");

	return (count);
}

/**
  * print_HEXADECIMAL - Print and unsigned integer in HEXADECIMAL
  * @args: va_list argument containing integer to be printed
  *
  * Return: Number of characters printed
  */

int print_HEXADECIMAL(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;

	count += print_unsigned_rec(num, 16, "0123456789ABCDEF");

	return (count);
}
