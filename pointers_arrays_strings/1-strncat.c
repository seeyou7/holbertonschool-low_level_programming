#include "main.h"

/**
 *_strncat - function that concatenates two strings only a part of the str
 *@dest: parameter of the function
 *@src: parameter of the function
 *@n: parameter of the function
 *Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int len_dest = 0, len_src = 0;

	while (dest[len_dest] != '\0')
		len_dest++;
	while (len_src < n && src[len_src] != '\0')
	{
		dest[len_dest] = src[len_src];
		len_dest++;
		 len_src++;
	}
	return (dest);
}
