#include "main.h"

/**
  * print_binary - Converts integers to binary
  * @args: Argument count
  *Return: Number in binary
  */
int print_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;
	int i;
	int leading_zeros = 1;

	for (i = 0; i < (int)sizeof(unsigned int) * 8;  i++)
	{
		if (num & (1 << (sizeof(unsigned int) * 8 - 1 - i)))
		{
			leading_zeros = 0;
			_putchar('1');
			count++;
		}
		else if (!leading_zeros || i == sizeof(unsigned int) * 8 - 1)
		{
			_putchar('0');
			count++;
		}
	}

	return (count);
}
