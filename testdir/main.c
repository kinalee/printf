#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"
#include <limits.h>

int main(void)
{
	long int big = 2147483648;
	printf("This is a longL %ld ", big);
	printf("Starting char tests \n");
	_printf("_printf with char literal: %c \n", 'c');
	char ctest = 'c';
	_printf("_printf with char var: %c \n", ctest);
	printf("Testing with a char argument but no specifier \n", 'c');
	_printf("_printf with no specifier\n", ctest);
	printf("Expecting a char argument but none exists %cs \n");
	_printf("_Expecting a char argument but none exists %cs \n");

	printf("Now testing percentage signs: %% \n");
	printf("This is a single percentage sign % \n");
	_printf("_This is a single percentage sign % \n");
	_printf("_Expecting a char argument but none exists %cs \n");

	_printf("\n");
	_printf("\n");
	_printf("\n");
	printf("Now testing INTEGERS!!\n");
	_printf("_A simple number: %d\n", 123);
	printf("int max: %d\n", INT_MAX);
	_printf("_int max: %d\n", INT_MAX);
	printf("int min: %d\n", INT_MIN);
	_printf("_int min: %d\n", INT_MIN);
	_printf("_int max + 1: %d\n", INT_MAX + 1);
	printf("int max + 1: %d\n", INT_MAX + 1);

	printf("\n");
	printf("\n");
	printf("Now testing STRINGS!!\n");
	printf("%s \n", NULL);
	printf("\n");


	int len;
	int len2;
	unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
/*	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
*/
	return (0);
}
