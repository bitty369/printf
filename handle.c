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
int i = 0, j, num_printed = 0;

if (format != NULL)
{
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != ' ')
		{
			if (format[i + 1] != '\0')
			{
				for (j = 0; fun[j].c[0]; j++)
				{
					if (format[i + 1] == fun[j].c[0])
					{
						num_printed += fun[j].f(args);
						i++;
						break;
					}
				}
				if (fun[j].c == NULL)
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					i++;
				}
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
}
return (num_printed);
}
