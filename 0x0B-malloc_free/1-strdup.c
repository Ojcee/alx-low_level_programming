#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: string
 *
 *
 * Return: Pointer to array
 */

char *_strdup(char *str)
{
int i = 0, len = 0;
char *arr;
if (str == NULL)
return (NULL);
while (str[i] != '\0')
{
len++;
i++;
}
arr = malloc((len * (sizeof(char))) + 1);
if (arr == NULL)
{
return (NULL);
}
i = 0;
while (i <= len)
{
arr[i] = str[i];
i++;
}
return (arr);
}
