#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array
 * @c: array character
 * @size: the size of the memory to print
 *
 * Return: Pointer to array
 */

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i = 0;
arr = malloc(size * (sizeof(c)));
if (size == 0)
return (NULL);
while (i < size)
{
if (arr == NULL)
{
return (NULL);
}
arr[i] = c;
i++;
}
return (arr);
}
