#include "main.h"
/**
 * main - Entry point
 *
 * _putchar A C program that prints with put function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char c[] = {"_putchar"};

	for (i = 0; i < 8; i++)
		_putchar(c[i]);
	_putchar('\n');

	return (0);
}
