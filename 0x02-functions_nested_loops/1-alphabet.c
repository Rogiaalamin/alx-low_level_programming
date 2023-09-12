#include "main.h"
/**
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
}
