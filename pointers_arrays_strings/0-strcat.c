#include "main.h"

/**
 *_strcat - function that concatenates two strings
 *@dest: parameter of the function
 *@src: parameter of the function
 *Return: char
 */

char *_strcat(char *dest, char *src)
{
	int len_dest = 0, len_src = 0;

	while (dest[len_dest] != '\0')

		len_dest++;
/*This while loop is responsible for finding the length of the destination*/
/*string. It iterates through the characters of the dest string until it*/
/*encounters the null character ('\0') indicating the end of the string*/
/*The loop increments len_dest with each iteration*/
/*effectively counting the number of characters in dest.*/

	while (src[len_src] != '\0')
	{
		dest[len_dest] = src[len_src];
		len_dest++;
		len_src++;
/*Similar to the previous loop, this while loop calculates the length of the*/
/* source string. It copies each character from the src string to the*/
/* corresponding position in the dest string, starting from where the*/
/* destination string left off. It also increments both len_dest and*/
/* len_src to keep track of the current positions in the respective strings*/
	}
	return (dest);
}
