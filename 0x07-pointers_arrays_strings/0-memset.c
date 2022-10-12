#include "main.h"
/**
 * _memset - fills memory with a constant byte
 *
 * @s: block of memory to fill
 * @b: number of bytes to be set to value
 * @n: value to be set
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
