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

	while ((c <= 'z') & (c != 'e') & (c != 'q'))
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}