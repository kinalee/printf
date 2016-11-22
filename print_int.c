#include <stdarg.h>
#include "holberton.h"

/**
 * _strlen - returns length of a string
 * @str: string to measure the length of
 * Return: int length of string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _numlen - measures the length of a number
 * @number: the number to be measured
 * Return: int length of the number (the count of digits in number)
 */
int _numlen(int number)
{
	int length = 0;
	int digits = 1;

	if (number == 0)
		return (1);

	if (number < 0)
		number *= -1;

	while (number > digits)
	{
		digits *= 10;
		length++;
	}

	return (length);
}
/**
 * _atoi - converts string into integer
 * @str: string to convert
 * Return: the converted string in integer form
 */
int _atoi(char *str)
{
	int number, i;
	int length = _strlen(str);

	i = 0;
	number = 0;
	while (i < length)
	{
		number += (number * 10) + (str[i] - '0');
		i++;
	}
	return (number);
}
/**
 * print_int - prints an integer and returns length of integer
 * @number: the number to be printed
 * Return: int length of number
 */
int print_int(int number)
{
	int length;
	int digits = 1;
	int flag = 0;

	if (number < 0)
	{
		number *= (-1);
		flag = 1;
	}

	length = _numlen(number) - 1;
	while (length > 0)
	{
		digits *= 10;
		length--;
	}
	length = _numlen(number);

	if (flag == 1)
		_putchar('-');

	while (length > 0)
	{
		_putchar(((number / digits) % 10) + '0');
		digits /= 10;
		length--;
	}

		length = _numlen(number);

	return (length);
}
