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
	int j = 1;

	while (i <= 8)
	{
		while (j <= 9)
		{
			putchar(i + '0');
			putchar(j + '0');
				if (i != 8 || j != 9)
				{
					putchar(',');
					putchar(' ');
				}
				j++;
		}
			i++;
			j = i = 1;
	}
	putchar('\n');
	return (0);
}
