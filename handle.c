#include "main.h"

/**
 * handle_print - print base on case
 * @args: argument
 * @format: base string
 * @fun: array of cases
 * Return: return lenght
 */

int handle_print(va_list args, const char *format, convert_t fun[])
{
int i = 0, j, num_printed = 0, check;

	while (format[i])
	{
		if (format[i] == '%')
		{
			for (j = 0; fun[j].c[0]; j++)
			{
				if (format[i + 1] == fun[j].c[0])
				{
					check += fun[j].f(args);
					if (check == -1)
						return (-1);
					num_printed += check;
					i++;
					break;
				}
			}
			if (fun[j].c == NULL && format[i + 1] != ' ')
			{
				_putchar(format[i]);
				_putchar(format[i + 1]);
				i++;
			}
			else
			{
				return(-1);
			}
		}
		else
		{
			_putchar(format[i]);
			num_printed += 1;
		}
		i++;
	}
	return (num_printed);
}
