#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_



int _putchar(char c);
int string_printer(char *string);
int _printf(const char *format, ...);
int _strlen(char *str);
int _numlen(long number);
int _atoi(char *str);
int print_int(long long int number);
char *_itoa(long long int number, char *stringnum);

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
