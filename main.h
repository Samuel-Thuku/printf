#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdarg.h>
/**
*struct specifier - struct specifiers
*@c: the conversion specifier
*@handler: the function pointer
**/

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
int _printf(const char *format, ...);
int print_unknown(char c);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int print_unsigned(unsigned int num, int base, const char *digits);

#endif
