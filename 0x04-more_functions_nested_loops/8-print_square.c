#include "main.h"
/**
 *print_square- check the code
 *
 * @size: parameter of function
 *
 * Return: Always 0.
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 0; j <= i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
