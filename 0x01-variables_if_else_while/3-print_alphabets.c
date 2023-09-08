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
	char x = 'A'

	while (c <= 'z')
	{
		putichar(c);
		c++;
		while (x <= 'Z')
		{
			putichar(x);
			x++;
		}
	}
	putchar('\n');
	return (0);
}
