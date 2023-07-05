#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to multiplay two number argument
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: int
*/

int main(int argc, char *argv[])
{
	int v1 = 0, v2 = 0;

	if (argc == 3)
	{
		v1 = atoi(argv[1]);
		v2 = atoi(argv[2]);
		printf("%d\n", v1 * v2);
/*atoi to coverte the string into an integer to do the multiplication*/
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
