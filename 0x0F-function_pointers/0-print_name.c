#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: name to print
 * @f: pointer to another function
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
