#include "main.h"
#include <stdio.h>

/**
 * print_alphabeth_x10 - Entry point for nested loop
 * Return: Always 0
 */
void print_alphabeth_x10(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		int ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
		_putchar(ch);
		}
	}
	_putchar('\n');
}
