#include "main.h"
/**
 * main - check the code
 *
 * print_alphabet it is a function to print the alphabet a - z
 *
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
	return (0);
}
