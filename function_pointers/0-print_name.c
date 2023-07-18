#include "function_pointers.h"

/**
 *print_name - function that print a name
 *@name: parameter of the func
 *@f: pointer to a func
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != 0)
		(f)(name);

}
