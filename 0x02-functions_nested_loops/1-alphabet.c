#include "main.h"
/**
 * main - check the code
 *
 * print lowercasr alphapet
 */

void print_alphabet(void)
{
	char c;

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
