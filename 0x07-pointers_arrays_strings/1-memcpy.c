#include "main.h"
/**
 * _memcpy - copies memory area
 *
 * @dest: starting pointer of the memory block
 * @src: starting pointer of the source block
 * @n: size of the memory block in bytes
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
