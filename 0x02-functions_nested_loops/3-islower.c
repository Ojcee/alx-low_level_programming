#incude "main.h"
#include <stdio.h>

/**
 * _islower - checks for lowercase character
 * @c: parameter the int use to check for
 * the argument of the function
 * Return:Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
