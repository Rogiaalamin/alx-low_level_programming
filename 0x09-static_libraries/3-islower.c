#include "main.h"
/**
 * _islower  - A function that check code
 *
 * @c: is a parmeter of function
 *
 * Return: return 1 if 'c' lowerecase else return 0 (Success)
 *
 */

int _islower(int c)
{

	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}
