#include "main.h"

/**
 * print_rev - check the code
 *
 * @s: is a parameter
 */

void print_rev(char *s)
{
	char *ptr;

	while (*ptr != '\0')
		ptr++;

	while (ptr != s)
	{
		ptr--;
		_putchar(*ptr);
	}
	_putchar('\n');
}
