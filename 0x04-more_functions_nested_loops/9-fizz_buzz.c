#include <stdio.h>

/**
 * main - check the code
 *
 * Description: program that prints the numbers 1 -100   followed by a new line
 * multiples of three print Fizz instead of the number
 * the multiples of five print Buzz
 * For numbers which are multiples of both three and five print FizzBuzz
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)

	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}
