#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * _printf - formatted printing of multiple types
 * @format: string containing characters and format specifiers
 * Return: int count of chars printed
 */

int _printf(const char *format, ...)
{
	va_list print;
	int i;
	char *tmp;

	i = 0;
	va_start(print, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
			/* temp code for character printer */
			case 'c':
				tmp[0] = va_arg(print, int);
				char_printer(tmp[0]);
				break;

			case 's':
				tmp = va_arg(print, char*);
				string_printer(tmp);
				i += 2;
				break;
			case '%':
				_putchar('%');
				i += 2;
				break;
			default:
				_putchar(format[i]);
				++i;
				break;
			}

		}
		else
		{
			_putchar(format[i]);
			++i;
		}
	}
	va_end(print);
	return (0);
}
