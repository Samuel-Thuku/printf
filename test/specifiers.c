#include "main.h"

typedef struct specifier
{
	char c;
	int (*handler)(va_list args);
} specifier_t;

specifier_t specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_int},
		{'i', print_int},
		{'\0', NULL}
	};
