#include <stdio.h>

/**
 *main-Entry point
 *
 *Description: A program that prints the alphabet in lowercase
 *
 *Return: Always 0(Success)
 */

int main(void)
{
	char c = 'a';

	while (c >= 'a')
	{
		putchar(c);
		putchar('\n');
		c++;
	}
	return (0);
}
