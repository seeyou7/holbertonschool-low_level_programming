#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */
/**
* main - program will assign a random number to the variable n each time exe
*
* Return: Always 0
*/
/* betty style doc for function main goes there */
int main(void)
{
int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
