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
	int n, x;

	while (n >= 0 && n < 10)
	{
		while (x >= 1 && x < 10)
		{
			if (n != x && n < x)
			{
				putchar(n + '0');
				putchar(x + '0');
				if (x + n != 17)
				{
					putchar(',');
					putchar(' ');
				}
				x++;
			}
			n++;
		}
	putchar('\n');
	return (0);
	}	
}
