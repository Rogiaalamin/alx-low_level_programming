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
	int last_dig;

	if (c < 0)
		last_dig = -1 * (c % 10);
	else
		last_dig = c % 10;
	return (last_dig);
}
