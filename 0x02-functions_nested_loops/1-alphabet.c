#include "main.h"
/**
 * print_alphabet it is a function to print the alphabet a - z
 * 
 * Reyurn always 0
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
