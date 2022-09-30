#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: int argument for function
 * Return: Always 0
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
		return (n * -1);
}
