#include "main.h"
/**
 * print_to_98 - A function that check code
 *
 * @n: is a parmeter of function
 *
 * Return: return 1 if 'c' lowerecase else return 0 (Success)
 *
 */

void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		_putchar(n + 48);
		_putchar(',');
		_putchar(' ');
	}
}
