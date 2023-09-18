#include "main.h"

/**
 * rev_string- check the code
 *
 * @s: is a parameter
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		s = s[i];
}
