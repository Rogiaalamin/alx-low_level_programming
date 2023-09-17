#include "main.h"
/**
 * print_most_numbers - check the code
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int i = 0;
	char c[] = "0123456789"

	while (c[i] != 2 && c[i] != 4)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
}
