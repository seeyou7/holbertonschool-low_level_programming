#include "main.h"

/**
 *_strcpy -  function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 *@dest: parameter of the function
 *@src: parameter of the function
 *Return: char
 */

char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

		while ((*dest++ = *src++))
		;
/*
*Le point-virgule (;)
*utilisé seul dans le code signifie une instruction vide.
 */
	return (temp);
}
