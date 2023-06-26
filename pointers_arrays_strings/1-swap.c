#include "main.h"

/**
 * swap_int - function that swap two int value
 *@a: parametre of the function
 *@b: parametre of the function
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp= *a;
	*a= *b;
	*b= temp;
}
