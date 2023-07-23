#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>

/**
 *struct _print - structure
 *@op: option
 *@f: fonction pointer
 *
 */

typedef struct _print
{
	char *op;
	void (*f)(va_list arg);
}print_t;


void print_all(const char * const format, ...);
void print_strings(const char *separator, const unsigned int n, ...);
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);



#endif
