#include "main.h"
/**
 * _isalpha - A function that check code
 *
 * @c: is a parmeter of function
 *
 * Return: return 1 if 'c' lowerecase or uppercase else return 0 (Success)
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
