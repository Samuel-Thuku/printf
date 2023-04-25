#include "main.h"
#include <stdlib.h>
/**
*Format - prints the format.
*@format: the format to print
*@args: a list of var arguments.
*Return: the length of the format to print.
**/
int Format(const char *format, va_list args)
{
	int num1 = 0;
	int num2 = 0;

	while (format && format[num2])
	{
		if (format[num2] == '%')
		{
			if (format[num2 + 1] == '\0')
			{
				return (-1);
			}
			num2++;
			while (format[num2] == ' ')
			{
				num2++;
			}
			if (format[num2] == '%')
			{
				num1 += printOut(format[num2]);
			}
			if (validate(format[num2]) == 0)
			{
				num1 = invalidSpec(format[num2 - 1], format[num2], num1);
			}	
		}
		else
		{
			num1 += printOut(format[num2]);
		}
		num2++;
	}
	return (num1);
}
