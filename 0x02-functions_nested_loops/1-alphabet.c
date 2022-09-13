#include "main.h"
#include <stdio.h>
/**
 * prints_alphabeth in a lowercase,
 * followed by a newline
 * Return: 0
 */
void print_alphabet(void)
{
	char c = 0;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
