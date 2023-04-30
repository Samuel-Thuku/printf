#include "main.h"

/**
 * print_int - Print a signed integer
 * @args: va_list argument containing the integer to be printed
 * Return: Number of characters printed
 */
int print_int(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;
	unsigned int abs_num;

	if (num < 0)
	{
		_putchar('-');
		count++;
		abs_num = -num;
	}
	else
	{
		abs_num = num;
	}
	if (abs_num / 10)
	{
		count += print_int_helper(abs_num / 10);
	}

	_putchar('0' + abs_num % 10);
	count++;

	return (count);
}

/* Print integer helper function*/
/**
  * print_int_helper - Print an integer recursively
  * @n: Integer to print
  *
  * Return: Number of digits printed
  */

int print_int_helper(int n)
{
	int count = 0;

	if (n / 10 != 0)
		count += print_int_helper(n / 10);

	count += _putchar('0' + abs(n % 10));

	return (count);
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
