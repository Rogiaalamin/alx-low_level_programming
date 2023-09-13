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
		c = c * (-1);
		i = c % 10;
		return (i);
	}
	else	
		i = c % 10;
		return (i);
}
