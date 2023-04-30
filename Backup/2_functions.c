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
	char bufferp[sizeof(unsigned int) * 8 + 1];
	unsigned int i;
	int leading_zeros = 1;

	for (i = sizeof(unsigned int) * 8 - 1; i < sizeof(unsigned int) * 8; i--)
	{
		buffer[i] = (num & 1) ? '1' : '0';
		num >>= 1;
	}
	buffer[sizeof(unsigned int) * 8] = '\0';

	for (i = 0; i < sizeof(unsigned int) * 8; i++)
	{
		if (buffer[i] == '1')
		{
			leading_zeros = 0;
		}
		if (!eading_zeros)
		{
			_putchar(buffer[i]);
			count++;
		}
	}

	if (leading_zeros)
	{
		_putchar('0');
		count++
	}
	return (count);
}
