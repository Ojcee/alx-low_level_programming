#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Array of Arguments
 *
 * Return: Return 0 (Success)
 */

int main(int argc, char *argv[])
{
int i = 1, sum, j = 0;
(void) argc;
if (argc < 1)
{
printf("%d\n", 0);
}
while (i < argc)
{
while (argv[i][j] != '\0')
{
if (!(isdigit(argv[i][j])))
{
return (printf("Error\n"), 1);
}
j++;
}
sum += (atoi(argv[i]));
i++;
}
printf("%d\n", sum);
return (0);
}
