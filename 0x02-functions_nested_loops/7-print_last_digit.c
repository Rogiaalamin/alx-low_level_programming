#include "main.h"
/**
 * print_last_digit - A function that check code
 *
 * @c: is a parmeter of function
 *
 * Return: return 0 (Success)
 *
 */

int print_last_digit(int c)
{
	int i;

	if (c < 0)
	{
		i = (-1) * (c % 10)
		return (i);
	}
	else
		i = c % 10;
		return (i);
}
