#include "main.h"
/**
 * swap_int - check the code
 *
 * @a: is a parametr 1
 * @b: is a parameter 2
 * @c: is a parameter 3
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
