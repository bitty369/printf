#include "main.h"

/**
 * print_char - print character
 * @arg: argument
 * Return: return lenght
 */
int print_char(va_list arg)
{
	int len;
	char c;

	c = va_arg(arg, int);
	len = _putchar(c);
	return (len);
}

/**
 * print_string - print string
 * @arg: argument
 * Return: return lenght
 */

int print_string(va_list arg)
{
	int i;
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * print_percentage - print percentage
 * @arg: argument
 * Return: return lenght
 */


int print_percentage(__attribute__((unused)) va_list arg)
{
	_putchar('%');
	return (1);
}
