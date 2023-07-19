#ifndef _FUNCTION_POINTER_H_
#define _FUNCTION_POINTER_H_

#include <stddef.h>
int int_index(int *array, int size, int (*cmp)(int));
void print_name(char *name, void (*f)(char *));
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
