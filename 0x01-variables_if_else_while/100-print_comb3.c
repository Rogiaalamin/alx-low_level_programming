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
        int n, i;

        while (n >= 0 && n < 10)
        {
		while (i >= 1 && i < 10)
                	putchar(n + '0');
			putchat(i + '0');
                	if (i != 9)
                	{
                        	putchar(',');
                        	putchar(' ');
                	}
                n++;
        }
        putchar('\n');
        return (0);
}
