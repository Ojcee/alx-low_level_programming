#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - Sets value of a bit to 0 at a given index
 * @n: The pointer to the number containing the bit
 * @index: The index of the bit to set
 *
 * Return: 1 if it worked, -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	x <<= index;
	if ((*n >> index) & 1)
		*n = *n ^ x;
	return (1);
}
