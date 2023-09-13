#include "main.h"
/**
 * jack_bauer - A function that check code
 *
 * Return: return 0 (Success)
 *
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9;)
		{
			_putchar(i);
			_putchar(j);
			_putchar(':');
			_putchar(i);
			j = j + 1;
			_putchar(j);
			_putchar('\n');
	}
}
