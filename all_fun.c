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


/**
 * print_integer - print integer
 * @arg: argument
 * Return: return lenght
 */


int print_integer(va_list arg)
{
	int num, check = 1, length = 0;
	unsigned int uni;

	num = va_arg(arg, int);
	if (num < 0)
	{
		length += _putchar('-');
		uni = num * -1;
	}
	else
		uni = num;
	for (; uni/ check > 9; )
		check *= 10;
	for (; check != 0; )
	{
		length += _putchar('0' + uni / check);
		uni %= check;
		check /= 10;
	}
	return (length);
}
