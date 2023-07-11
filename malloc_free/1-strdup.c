#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
*_strdup - function function that returns a pointer to a newly
*allocated space in memory
*@str: pointer to a char
*
*Return: pointer to a string or NUUL IF insufient memory
*/


char *_strdup(char *str)
{
	char *str2;

	if (str == NULL)
		return (NULL);

	str2 = malloc(strlen(str) + 1);

	if (str2 == NULL)
	{
	return (NULL);
	}
	strcpy(str2, str);
	return (str2);
	free(str);
}
