#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - function main
 *@argc: numbers arguments
 *@argv: arguments
 *
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, res = 0;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	s = argv[2];
	if (argv[2][1] != '\0' || get_op_func(s) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	res = get_op_func(s)(num1, num2);
	printf("%d\n", res);

	return (0);
}
