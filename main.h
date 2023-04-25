#ifndef _MAIN_H_
#define _MAIN_H_
#include <unistd.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int Format(const char *format, va_list args);
int invalidSpec(char previousFormat, char format, int num1);
int validate(char type);
int printOut(char c);
#endif
