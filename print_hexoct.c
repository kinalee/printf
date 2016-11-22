#include <stdarg.h>
#include "holberton.h"

/**
 * print_octal - converts an int into octal format
 * @number: number to convert
 * Return: int count of chars printed
 */
int print_octal(int number)
{
	int total = 0;
	int copy = number;
	int sign = 1;


	if (copy < 0)
	{
		sign = -1;
		copy *= -1;
		total++;
		_putchar('-');
	}
	if (copy < 8)
	{
		_putchar('0' + copy);
		return (1);
	}

	else
	{
		while (copy > 8)
		{
			_putchar('1');
			copy -= 8;
			if (copy < 8)
			{
				_putchar('0' + copy);
			}
		}
	}
	total += _numlen(number);
	return (total);
}

/**
 * hex_handler - handles hex value printing for cases 10-15
 * @copy: number to print. must be between 10 and 15
 * @lowercase: set to 32 to print lower case. For upper case, should be 0
 * Return: void
 */
void hex_handler(int copy, int lowercase)
{
	if (copy == 10)
	{
		_putchar('A' + lowercase);
	}
	else if (copy == 11)
	{
		_putchar('B' + lowercase);
	}
	else if (copy == 12)
	{
		_putchar('C' + lowercase);
	}
	else if (copy == 13)
	{
		_putchar('D' + lowercase);
	}
	else if (copy == 14)
	{
		_putchar('E' + lowercase);
	}
	else if (copy == 15)
	{
		_putchar('F' + lowercase);
	}
}

/**
 * print_big_hex - converts an int into hex format
 * @number: number to convert
 * Return: int count of chars printed
 */
int print_big_hex(int number)
{
	int total = 0;
	int copy = number;
	int sign = 1;

	if (copy < 0)
	{
		sign = -1;
		copy *= -1;
		total++;
		_putchar('-');
	}
	if (copy < 16)
	{
		if (copy >= 0 && copy <= 9)
			_putchar('0' + copy);
		else if (copy >= 10 && copy <= 15)
			hex_handler(copy, 0);
		total++;
		return (total);
	}
	while (copy > 16)
	{
		_putchar('1');
		total++;
		copy -= 16;
		if (copy < 16)
		{
			if (copy >= 0 && copy <= 9)
				_putchar('0' + copy);
			else if (copy >= 10 && copy <= 15)
				hex_handler(copy, 0);
			total++;
		}
	}
	return (total);
}

/**
 * print_small_hex - converts an int into hex format
 * @number: number to convert
 * Return: int count of chars printed
 */
int print_small_hex(int number)
{
	int total = 0;
	int copy = number;
	int sign = 1;

	if (copy < 0)
	{
		sign = -1;
		copy *= -1;
		total++;
		_putchar('-');
	}
	if (copy < 16)
	{
		if (copy >= 0 && copy <= 9)
			_putchar('0' + copy);
		else if (copy >= 10 && copy <= 15)
			hex_handler(copy, 32);
		total++;
		return (total);
	}
	while (copy > 16)
	{
		_putchar('1');
		total++;
		copy -= 16;
		if (copy < 16)
		{
			if (copy >= 0 && copy <= 9)
				_putchar('0' + copy);
			else if (copy >= 10 && copy <= 15)
				hex_handler(copy, 32);
			total++;
		}
	}
	return (total);
}
