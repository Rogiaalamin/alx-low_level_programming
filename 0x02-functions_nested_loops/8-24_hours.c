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

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)			
		{
			_putchar(i);
			_putchar(i);
			_putchar(':');
			_putchar(j);
			_putchar(j);
			_putchar('\n');
		}
	}
}
