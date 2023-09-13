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
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
			printf("%d, ", i)
	}
	else
	{
		for (i = n; i > 98; i--)
		printf("%d, ", i)
	}
	printf("98 \n");
}
