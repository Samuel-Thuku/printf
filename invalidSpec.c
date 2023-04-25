#include "main.h"
#include <stdlib.h>
/**
*invalidSpec - prints a invalid specifier
*@previousFormat: the previous specifier of actual specifier
*@format: the specifier to prints
*@num1: the current count before.
*Return: the current count after.
**/
int invalidSpec(char previousFormat, char format, int num1)
{
	num1 += printOut('%');

	if (previousFormat == ' ')
	{
		num1 += printOut(' ');
		num1 += printOut(format);
	}
	else
	{
		num1 += printOut(format);
	}
	return (num1);
}
