#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

int _putchar(char c);
int _printf(const char *format, ...);
int print_unknown(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int print_int_helper(int n);
int print_binary(va_list args);
int print_unsigned(va_list args);
int print_unsigned_rec(unsigned int n, unsigned int base, char *digits);
int print_octal(va_list args);
int print_hexadecimal(va_list args);
int print_HEXADECIMAL(va_list args);
int print_string_S(va_list args);
int print_HEX(char c);

#endif
