#include "holberton.h"

/**
 * string_printer - prints a string and returns length of string
 * @string: string to be printed
 * Return: int containing number of chars printed
 */

int string_printer(char *string)
{
	int i = 0;

	while(string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
	}
	return (i);
}
