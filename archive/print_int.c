#include <stdarg.h>
#include "holberton.h"

int _strlen(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int _numlen(int number)
{
	int length = 0;
	int digits = 1;

	if (number == 0)
		return (1);

	if (number < 0)
		number *= -1;

	while(number > digits)
	{
		digits *= 10;
		length++;
	}

	return (length);
}

int _atoi(char *str)
{
	int number, i;
	int length = _strlen(str);

	i = 0;
	number = 0;
	while(i < length)
	{
		number += (number * 10) + (str[i] - '0');
		i++;
	}
	return (number);
}

int print_int(int number)
{
	int length;
	int digits = 1;

	length = _numlen(number) -1;
	while(length > 0)
	{
		digits *= 10;
		length--;
	}
	length = _numlen(number);
	while(length > 0)
	{
		_putchar(((number / digits) % 10) + '0');
	}
	length = _numlen(number);
	return (length;)
}
