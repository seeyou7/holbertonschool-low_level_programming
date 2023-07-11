#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * string_nconcat -  function that concatenates two strings.
  * @s1: paramater of the function
  * @s2: parameter of the function
  * @n: ...
  *
  * Return: ptr
  */

char *str_concat(char *s1, char *s2)
{
	int s1_length = strlen(s1);
	int i;
  int s2_length = strlen(s2);
  int size = s1_length + s2_length + 1;
  char *s = calloc(size, sizeof(char));

  /* Copy s1 into s*/
  for (i = 0; i < s1_length; i++)
    s[i] = s1[i];

  /* Copy s2 into s, but shifted over by the length of s1 to append it after s1!*/
  for (i = 0; i < s2_length; i++)
    s[s1_length + i] = s2[i];

  /* put the null terminator in to end the string*/
  s[size - 1] = '\0';

  return s;
}

/**
	char *total;
	int i = 0;

	if (s1 == NULL)
	     s1 = "";
	if (s2 == NULL)
		s2 = "";

	total = malloc(strlen(s1[i]) + strlen (s2[i]) + 1);
	if (total == NULL)
	{
		return (NULL);
	}

	strcpy(total, s1[i]);
	strcat(total, s2[i]);
	free(total);
	return (total);
}
*/
