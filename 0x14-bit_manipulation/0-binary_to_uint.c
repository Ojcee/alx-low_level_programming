#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * binary_to_uint - Converts binary to an unsigned int
 * @b: Binary string
 *
 * Return: Unsigned int conversion, OR
 *		0 if b is NULL or string chars are invalid
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bi = 0;
	int i, len = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (len = 0; b[len] != '\0'; len++)
	{
		if (!(b[len] == '0' || b[len] == '1'))
			return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
		bi += ((b[i] - '0') * (1 << (len - i - 1)));

	return (bi);
}
