#include "main.h"
  
/**
 * _strlen - fucnction that return the lenth of a string 
 *@s: parameter of the function
 * Return: (strlen)
 */

int _strlen(char *s)
{
  int i = 0;
  while (*s != '\0')
    {
      i++;
      s++;
    }
  return (i);
}
