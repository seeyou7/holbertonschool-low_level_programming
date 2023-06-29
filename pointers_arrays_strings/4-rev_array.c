#include "main.h"

/**
 *reverse_array - function that reverses the content of an array of integers
 *@a: parameter of the function
 *@n: parameter of the function
 *Return : void
 */

void reverse_array(int *a, int n)
{
	int *start = a;
/* Pointeur vers le début du tableau*/
	int *end = a + n - 1;
/*Pointeur vers la fin du tableau*/

	while (start < end)
	{
/*Échange des valeurs pointées par start et end*/
		int temp = *start;
		*start = *end;
		*end = temp;
/*Déplacement des pointeurs start et end*/
		start++;
		end--;
	}
}
