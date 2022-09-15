#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');
}
