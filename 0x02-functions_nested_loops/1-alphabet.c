#include "main.h"
/**
 * main - check the code
 *
 *Desription: print lowercase
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
