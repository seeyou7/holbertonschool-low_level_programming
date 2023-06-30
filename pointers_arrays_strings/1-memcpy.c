/*iLa fonction memcpy() copie n octets depuis*/
/*la zone mémoire src vers la zone mémoire dest*/
/*Les deux zones ne doivent pas se chevaucher*/
/*Si c'est le cas, utilisez plutôt memmove(3)*/
#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src
 * to memory area dest
 * @src: pointer to memory to be copied
 * @dest: pointer to meort des to be filled
 * @n: constant byte
 *
 * Return: a pointer to the memory area @s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
