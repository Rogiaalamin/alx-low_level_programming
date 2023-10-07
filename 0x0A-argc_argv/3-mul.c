#include <stdio.h>
#include <stdlib.h>

/*main-print sum of 2 numbers.
 * @argc:int
 * @argv: list
 * Return: 0-success, non-zero-fail.
 *
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(arfv[1] * atoi9argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
