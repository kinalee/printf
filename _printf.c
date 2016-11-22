#include <stdarg.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _printf - prints in a formatted fashion
 * @format: string formatter to dictate print formats
 * Return: total number of bytes printed
 */

int _printf(const char *format, ...)
{
	va_list av;
	char *str;
	int i, j, len = 0;

	va_start(av, format);
	if (format == NULL)
		return (len);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			len += _putchar(format[i]);
		else
		{
			for (j = 0; format[i + j] != '\0'; ++j)
			{
				if (format[i + j] == 'd' || format[i + j] == 'i')
				{
					len += print_int(va_arg(av, int));
					i += (j + 1);
					break;
				}
			}

			if (format[i + 1] == 'c')
				len += _putchar(va_arg(av, int));
			else if (format[i + 1] == '%')
				len += _putchar(format[i + 1]);
			else if (format[i + 1] == 's')
			{
				str = va_arg(av, char *);
				if (str == NULL)
					len += string_printer("(null)");
				else
					len += string_printer(str);
			}
			else
				len += _putchar(format[i--]);
			i++;
		}
	}
	return (len);
}
