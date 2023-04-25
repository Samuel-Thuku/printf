#include "_main.h"
#include <stdlib.h>
/**
*validate - validate the type
*@type: character to be comparate
*Return: 1 if char is equal to a type
**/
int validate(char type)
{
	char types[] = {'c', 's', 'd', 'i', 'b', '%'};
	int num = 0;

	while (types[num])
	{
		if (types[num] == type)
		{
			return (1);
		}
		num++;
	}
	return (0);
}
