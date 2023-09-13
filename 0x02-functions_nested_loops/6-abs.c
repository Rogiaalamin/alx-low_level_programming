#include "main.h"
/**
 * _abs - A function that check code
 *
 * @c: is a parmeter of function
 *
 * Return: 0 (Success)
 *
 */

int _abs(int c)
{
	if (c < 0)
	{
		c = c * '-1';
		return (c);
	}
	else
		return (c);
}
