#include <ctype.h>
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
	int i, s, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (s = 0; argv[i][s] != '\0'; s++)
		{
			if (!isdigit(argv[i][s]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);

	}
	printf("%d\n", sum);
	return (0);
}
