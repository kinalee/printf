#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"

int main(void)
{
	char *string = "This is a test string";
	int count;

	_printf("a%sb\n", "c");
	_printf("THis is a string literal test\n");
	_printf("A string conversion test: %s\n", string);

	return (0);
}
