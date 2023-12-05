#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*function)();
} convert;

int _putchar(char c);
int _printf(const char *format, ...);
int print_13(va_list val);
int print_b(va_list args);
int print_37(void);
int print_c(va_list val);
int print_d(va_list args);
int print_h(unsigned long int p);
int print_H(unsigned int p);
int print_i(va_list args);
int print_o(va_list val);
int print_p(va_list val);
int print_r(va_list val);
int print_s(va_list val);
int print_S(va_list val);
int _strlen(char *str);
int print_u(va_list args);
int print_x(va_list val);
int print_X(va_list val);

#endif
