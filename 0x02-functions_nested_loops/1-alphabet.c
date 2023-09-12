#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: A C program that prints with putchar alphabet, in lowercase.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void);
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (c);
}

