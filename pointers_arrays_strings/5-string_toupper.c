#include "main.h"

/**
 *string_toupper - function that changes all lowercase letters
 * of a string to uppercase
 *@s: parameter of the function
 *Return: char
 */

char *string_toupper(char *s)
{
	int i;
/* integer variable i that will be used as counter in the following loop*/
	for (i = 0; s[i] != '\0'; i++)
	{
/*iterates through each character of the string s*/
/*until it encounters the null character ('\0')*/
/* which marks the end of the string.*/
/* The loop increments the counter i after each iteration*/
		if (s[i] >= 'a' && s[i] <= 'z')
		{
/*line checks if the current character at index i in the*/
/*string s is a lowercase letter. It compares the ASCII value*/
/*of the character with the ASCII values of lowercase letters 'a' and 'z'.*/
			s[i] -= 32;
/*If the condition in the previous line is true*/
/*this line subtracts 32 from the ASCII value of */
/*the lowercase letter, effectively converting */
/*it to its uppercase equivalent. In ASCII, the */
/*difference between lowercase and uppercase letters is 32*/
		}
	}
	return (s);
}
