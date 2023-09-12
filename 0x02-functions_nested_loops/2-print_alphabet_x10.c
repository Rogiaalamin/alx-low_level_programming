#include <stdio.h>
#include <main.h>
/**
 * main - Entry point
 *
 * Description: A C program that prints 10 times the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void);

int main(void)
{
	print_alphabet_x10();
}

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a', c <= 'z', c++)
		{
			putchar(c);
		}
		putchar('\n');
		return (0);
	}
}
