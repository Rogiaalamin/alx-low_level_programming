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
	char c = 'a';

	while (n >= 0 && n < 10)
	{
		putchar(n + '0');
		n++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
