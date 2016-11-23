#include <stdarg.h>
#include "holberton.h"

/**
 * itoa - converts an integer into a string
 * @number: number to convert
 * Return: pointer to char array
 */
char *_itoa(long long int number, char *stringnum)
{
	int length, i;

	long long int copy = number;
	if (number < 0)
		copy *= -1;
	length = _numlen(number);
	i = length - 1;
	if (number < 0)
		i = length;
	while (copy > 0 && i >= 0)
	{
		stringnum[i] = (copy % 10) + '0' ;
		copy /= 10;
		i--;
	}
	if (number < 0)
		stringnum[0] = '-';
	return(stringnum);
}

/**
 * print_octal - converts an int into octal format
 * @number: number to convert
 * Return: int count of chars printed
 */
int print_octal(unsigned int number)
{
	int length, i;
	char stringnum[] = {'\0','\0','\0','\0','\0','\0','\0','\0','\0',
			    '\0','\0', '\0'};
	unsigned int copy = number;

	length = _numlen(number);
	i = length - 1;
	while (copy > 0 && i >= 0)
	{
		stringnum[i] = (copy % 8) + '0' ;
		copy /= 8;
		i--;
	}
	string_printer(stringnum);
	return (length);
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
int print_big_hex(unsigned int number)
{
	int total = 0;
	unsigned int copy = number;

	if (copy < 0)
	{
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
int print_small_hex(unsigned int number)
{
	int total = 0;
	unsigned int copy = number;

	if (copy < 0)
	{
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
