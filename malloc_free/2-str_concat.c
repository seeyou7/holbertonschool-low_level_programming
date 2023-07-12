#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * str_concat - function that concatenates two strings.
  * @s1: paramater of the function
  * @s2: parameter of the function
  *
  * Return: ptr
  */

char *str_concat(char *s1, char *s2)
{
	int i, len1 = 0, len2 = 0;
	char *new;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		len1++;

	new = malloc(sizeof(char) * len1);
	if (new == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		new[len2++] = s1[i];
	for (i = 0; s2[i]; i++)
		new[len2++] = s2[i];

	return (new);
}
