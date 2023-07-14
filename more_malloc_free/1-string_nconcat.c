#include "main.h"
#include <stdlib.h>


/**
 *_len - foction calculate lenth of a string
 *@s: parameter of the function
 *
 *Return: int
 */


int _len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 *string_nconcat -  function that concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *@n: n bytes
 *
 *Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = _len(s1);
	len2 = _len(s2);

	if (len2 > n)
		len2 = n;
	p = malloc(sizeof(char) * (len1 + len2 + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		p[i] = s2[j];
		i++;
	}
	p[i] = '\0';
	return (p);
}
