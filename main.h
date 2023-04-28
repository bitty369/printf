#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct convert - strctructure cases
 * @c: character condition
 * @f: functin excuted for case
 */
typedef struct convert
{
	char *c;
	int (*f)(va_list arg);
} convert_t;

int _putchar(char c);
int _printf(const char *format, ...);
int handle_print(va_list args, const char *format, convert_t fun[]);
int print_char(va_list arg);
int print_string(va_list arg);
int print_percentage(__attribute__((unused)) va_list arg);

#endif
