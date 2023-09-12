#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C program that check lowercas chars.
 *
 * Return: Always 0 (Success)
 */

int _islower(int c);

int main(void)
{
	int r, i;

	r = _islower(i);
	putchar("%d", &r);
	return (0);
}

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1); }
	else
	{
		return (0);
	}
}
