#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that adds positive number argument
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: int
*/

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
		sum += atoi(argv[i]);
		}
		printf("%d\n", sum);

	}
	else
	{
		printf("0\n");
	}
	return (0);
}
