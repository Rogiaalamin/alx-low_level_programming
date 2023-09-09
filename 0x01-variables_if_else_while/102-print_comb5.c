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
	int i = 0;
	int j = 0;

	while (i <= 99)
	{
		while (j <= 99)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');

			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
		j = 0;
	}
	putchar('\n');
	return (0);
}
