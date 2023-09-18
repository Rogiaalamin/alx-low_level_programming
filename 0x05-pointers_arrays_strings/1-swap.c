#include "main.h"
/**
 * swap_int - check the code
 *
 * @a: is a parametr 1
 * @b: is a parameter 2
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
