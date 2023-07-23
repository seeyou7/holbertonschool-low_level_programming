#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_c - function that print char
 *@arg: argument
 *
 *Return: void
 */

void print_c(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 *print_i - function that print int
 *@arg: argument
 *
 *Return: void
 */
void print_i(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 *print_f - function thata print float
 *@arg: argument
 *
 *Return: void
 */

void print_f(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 *print_s - function that print string
 *@arg: argument
 *
 *Return: void
 */

void print_s(va_list arg)
{
	char *ar;

	ar = va_arg(arg, char *);
	if (ar == NULL)
		ar = "(nil)";
	printf("%s", ar);
}

/**
 *print_all -  function that prints anything
 *@format: list of types
 *
 *Return: void
 */

void print_all(const char *const format, ...)
{
	print_t tab[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};
	va_list arg;
	int i = 0, j = 0;
	char *space = "";

	va_start(arg, format);
	while (format && format[i] != '\0')
	{
		while (tab[j].op)
		{
			if (*tab[j].op == format[i])
			{
				printf("%s", space);
				tab[j].f(arg);
				space = ", ";
			}
			j++;
		}
		j = 0;
		i++;
	}
		printf("\n");
		va_end(arg);
}
