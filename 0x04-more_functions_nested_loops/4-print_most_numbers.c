#include "main.h"
/**
 * print_most_numbers - check the code
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int i = 0;
	char c[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'}

	while (c[i] != 2 && c[i] != 4)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
}
