#include "main.h"
/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int i, j;
	char c[] = "01234567891011121314";

	for (i = 0; i < 10; i++)
		for (j = 0; j < 21; j++)
		{
			_putchar(c[j]);
			_putchar('\n');
		}
		_putchar('\n');
}
