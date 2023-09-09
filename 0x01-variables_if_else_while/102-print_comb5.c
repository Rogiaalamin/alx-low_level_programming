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
	int first = 0, second;

	while (first <= 99)
	{
		second = first;
		while (second <= 99)
		{
			if (second != first)
			{
				putchar(first / 10 + '0');
				putchar(first % 10 + '0');
				putchar(' ');
				putchar(second / 10 + '0');
				putchar(second % 10 + '0');

				if (first != 98 || second != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			second++;
		}
		first++;
	}
	putchar('\n');
	return (0);
}
