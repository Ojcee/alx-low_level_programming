#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - Adds integers
 * @a: Integer to add
 * @b: Integer to add
 * Return: Sum of integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts integers
 * @a: Integer to subtract
 * @b: Integer to subtract
 * Return: Difference between integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: Integer to multiply
 * @b: Integer to multiply
 * Return: Product of integers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers
 * @a: Integer to divide
 * @b: Integer to divide
 * Return: Division of two integers
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Modulus of an integer
 * @a: Integer
 * @b: Integer
 * Return: Modulus of two numbers
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
