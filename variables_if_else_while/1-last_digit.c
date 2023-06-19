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
if (n > 5)
{
printf("last digit of %d is %d and is greater than 5\n", n, LastDigit);
}
else if (n == 0)
{
printf("last digit of %d is %d and is 0\n", n, LastDigit);
}
else if (n < 6 &&  n != 0)
{
printf("last digit of %d is %d and is less than 6 and not 0\n", n, LastDigit);
}
return (0);
}
