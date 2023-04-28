#include "main.h"

/**
 * _printf - handling printf
 * @format: string base
 * Return: return number printed
 */


int _printf(const char *format, ...)
{
	int num_pr;
	convert_t fun[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percentage},
		{NULL, NULL},
	};
	va_list list;

	if (format == NULL)
		return (-1);
	va_start(list, format);

	num_pr = handle_print(list, format, fun);

	va_end(list);

	return (num_pr);
}
