#include "main.h"
/**
 * _islower  - A function that check code
 * Description: does my print_alphabet
 *
 * c is a parmeter of function
 * Return: Always 0 (Success)
 *
 */

int _islower(int c)
{
	int i;

	if ((i >= 'a') && (i <= 'z'))
		return (1);
	else
		return (0);
}
