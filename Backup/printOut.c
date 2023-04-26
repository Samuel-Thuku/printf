#include "main.h"
#include <stdlib.h>
/**
*printOut - writes the character c to standard output.
*@c: The character to print.
*Return: On success 1. On error, -1 is returned.
**/
int printOut(char c)
{
	return (write(1, &c, 1));
}
