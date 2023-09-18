#include "main.h"
/**
 *puts2 - check the code
 *
 * @str: is a parameter
 */

void puts2(char *str)
{
	if (*str % 2 == 0)
	{
		_putchar(*str);
		_putchar('\n');
	}
}
