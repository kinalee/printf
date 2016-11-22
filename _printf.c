#include <stdarg.h>
#include "holberton.h"

int _printf(const char *format, ...)
{
	va_list av;
	int i, j, len = 0;
	char *str;

	va_start(av, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			len += _putchar(format[i]);
		else
		{
			if(format[i + 1] == 'c')
				len += _putchar(va_arg(av, int));
			if(format[i + 1] == '%')
				len += _putchar('%');
			if(format[i + 1] == 's')
				len+= string_printer(va_arg(av, char *));
			i++;
		}
	}
	return (len);
}
