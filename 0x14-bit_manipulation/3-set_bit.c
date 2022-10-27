#include <stdlib.h>

/**
 * set_bit - Sets the value of a bit to 1 at index
 * @n: The number containing the bit
 * @index: The index of the bit to set
 *
 * Return: 1 if it worked, otherwise, -1 if an error ocurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	x <<= index;
	*n = *n | x;
	return (1);
}
