#include "main.h"
/**
 * _strlen- check the code
 *
 * @s: is a parameter
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		++i;
	return (i);
}
