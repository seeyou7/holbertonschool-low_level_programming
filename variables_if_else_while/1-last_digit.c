#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - program will assign a random number to the variable n
*
* Return: Always 0
*/
/* betty style doc for function main goes there */

int main(void)
{
	int n;
	int LastDigit;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
LastDigit = n % 10;
if (LastDigit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, LastDigit);
}
else if (LastDigit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, LastDigit);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LastDigit);
}
return (0);
}
