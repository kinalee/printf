#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/* Prototype list */

int _putchar(char c);
int string_printer(char *string);
int _printf(const char *format, ...);

typedef struct print_type
{
	char *c;
	int (*fc)(char);
	int (*f)(char *);
} p_t;

#endif
