#include "main.h"
/**
 * print_sign - A function that check code
 *
 * @n: is a parmeter of function
 *
 *Return:return 1 if 'n' postive or 0 if 0 else return -1 if negative (Success)
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		-putchar("+, ");
		return (1);
	}
	else if (n == 0)
	{
		_putchar("0, ");
		return (0);
	}
	else
	{
		_putchar("-, ");
		return (-1);
	}
}
