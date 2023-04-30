#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int print_unknown(char c);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int print_unsign(unsigned int num, int base, const char *digits);

#endif
