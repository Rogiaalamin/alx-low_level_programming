#include "main.h"
/**
 * main - check the code
 *
 *print_alphabet: it is a function to print lowercase alphapet
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
