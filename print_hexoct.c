#include <stdarg.h>
#include "holberton.h"

/**
 * _itoa - converts an integer into a string
 * @number: number to convert
 * @stringnum: pointer to the string that will store the num
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
		stringnum[i] = (copy % 10) + '0';
		copy /= 10;
		i--;
	}
	if (number < 0)
		stringnum[0] = '-';
	return (stringnum);
}
