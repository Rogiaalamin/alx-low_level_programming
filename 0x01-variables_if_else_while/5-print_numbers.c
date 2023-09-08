#include <stdio.h>

/**
 *main-Entry point
 *
 *Description: A C program that prints numbers from 0 to 9
 *
 *Return: Always 0(Success)
 */

int main(void)
{
	int n;

	while (n >= 0 && n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
