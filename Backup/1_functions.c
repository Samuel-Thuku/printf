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

	if (num < 0)
	{
		write(1, "-", 1);
		count++;
		num = -num;
	}

	count += print_unsigned(num, 10, "0123456789");
	return (count);
}

int print_unsigned(unsigned int num, int base, const char *digits)
{
	int count = 0;
	char buffer[32];

	int i = 0;
	int j;

	j = i - 1;
	do {
		buffer[i++] = digits[num % base];
		num /= base;
	} while (num > 0);

	for (; j >= 0; j--)
	{
		write(1, &buffer[j], 1);
		count++;
	}

	return (count);
}
