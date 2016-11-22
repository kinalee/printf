#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"


/**
 * format_parser - takes specfication and executes the appropriate functionality
 * @spec_char: char being evaluated
 * Return: void
 */
void format_parser(char spec_char)
{
	switch (spec_char)
			{
			case 'c':
				c = va_arg(print, int);
				_putchar(c);
				i++;
				break;
			case 's':
				tmp = va_arg(print, char*);
				string_printer(tmp);
				i++;;
				break;
			case '%':
				_putchar('%');
				i++;
				break;
			case 'i':
			case 'd':
				tmp = va_arg(print, char*);
				int_printer(tmp);
				i++;
				break;
			default:
				_putchar(format[i]);
				break;
			}
}

/**
 * _printf - formatted printing of multiple types
 * @format: string containing characters and format specifiers
 * Return: int count of chars printed
 */

int _printf(const char *format, ...)
{
	va_list print;
	int i = 0;
	char *tmp;
	char c, id;

	va_start(print, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			id = format[i + 1];
			if (id == 'c' || id == 's' || id == '%' || id == 'i' ||
				id == 'd')
			{
				format_parser(id);
				i++;
			}
			else
				_putchar(format[i]);
		}
		else
			_putchar(format[i]);
		i++;
	}
	va_end(print);
	return (0);
}
