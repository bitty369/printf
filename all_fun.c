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
	int i = 0, len = 0;
	char *str;

	str = va_arg(arg, char *);

	while (str[i])
	{
		len += _putchar(str[i]);
		i++;
	}
	return (len);
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
