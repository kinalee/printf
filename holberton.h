#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_



int _putchar(char c);
int string_printer(char *string);
int _printf(const char *format, ...);
int _strlen(char *str);
int _numlen(int number);
int _atoi(char *str);
int print_int(int number);
int print_octal(int number);
void hex_handler(int copy, int lowercase);
int print_small_hex(int number);
int print_big_hex(int number);
/**
 * struct print_type - a struct to handle IDs and print types
 * @c: char pointer to format type
 * @fc: function pointer that prints strings
 * @f: function pointer that prints chars
 */
typedef struct print_type
{
	char *c;
	int (*fc)(char);
	int (*f)(char *);
} p_t;

#endif
