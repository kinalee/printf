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
int _numlen(long number)
{
	int length = 0;
	long digits = 1;

	if (number == 0)
		return (1);
	if (!(number % 10))
		length++;
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
int print_int(long long int number)
{
	char string[] = {'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0',
			 '\0', '\0', '\0', '\0'};
	char *str;

	str = _itoa(number, string);
	return (string_printer(str));
}
