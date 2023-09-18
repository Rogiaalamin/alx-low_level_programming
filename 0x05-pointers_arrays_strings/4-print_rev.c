#include "main.h"

/**
 * _puts - check the code
 *
 * @str: is a parameter
 */

void _puts(char *str)
{
	int i;

	for (i = '\0'; i = str; str--)
		_putchar(*(str + i));
	_putchar('\n');
}
